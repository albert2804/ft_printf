/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv_hex1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestraic <aestraic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 11:07:47 by aestraic          #+#    #+#             */
/*   Updated: 2022/08/25 15:30:54 by aestraic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

static char	*ft_reverse_string_hex(char *s)
{
	size_t	len;
	size_t	i;
	char	*rev_str;

	i = 0;
	len = ft_strlen(s);
	rev_str = malloc(len * sizeof(char) + 1);
	while (i < len)
	{
		rev_str[len - 1 - i] = s[i];
		i++;
	}
	rev_str[len] = '\0';
	free(s);
	return (rev_str);
}

static int	ft_count_strlen(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		n = n / 16;
		i++;
	}
	return (i);
}

static char	ft_decide_letter(unsigned int n, int k)
{
	char	c;

	if (n == 10)
		c = 'A';
	else if (n == 11)
		c = 'B';
	else if (n == 12)
		c = 'C';
	else if (n == 13)
		c = 'D';
	else if (n == 14)
		c = 'E';
	else if (n == 15)
		c = 'F';
	if (k)
		return (ft_tolower(c));
	return (c);
}

int	ft_conv_hex(va_list arg_list, int k, int counter)
{
	char			*s;
	unsigned int	n;
	int				i;

	n = va_arg(arg_list, unsigned int);
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	s = ft_calloc(ft_count_strlen(n) * sizeof(char), 2);
	while (n != 0)
	{
		if (n % 16 > 9)
			s[counter] = ft_decide_letter((n % 16), k);
		else
			s[counter] = (n % 16) + '0';
		n = n / 16;
		counter++;
	}
	s = ft_reverse_string_hex(s);
	i = ft_strlen(s);
	ft_putstr_fd(s, 1);
	free(s);
	return (i);
}
