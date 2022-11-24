/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainft_.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestraic <aestraic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:44:30 by aestraic          #+#    #+#             */
/*   Updated: 2022/08/25 15:36:55 by aestraic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>
#include <stdio.h>

int main(void)
{
    int a, b;
    a = ft_printf("-16: %x\n", -16);
    b = printf("-16: %x\n", -16);
    printf("\nft_print:%d\n", a);
    printf("\nprint:%d\n", b);
    // a = ft_printf("17: %x\n", 17);
    // printf("\nprint:%d\n", a);
	
    // a = ft_printf("ft:%x\n", 11);
    // printf("\nprint: %d\n", a);
    // a = ft_printf("ft:%x\n", 10);
    // printf("\nprint: %d\n", a);
	
    // a = ft_printf("%x\n", 42);
    // printf("\n%d\n", a);
	
    // a = ft_printf("%x\n", 1);
    // printf("\n%d\n", a);
	
    // a = ft_printf("%x\n", 5454);
    // printf("\n%d\n", a);

    // a = ft_printf("%x\n", (int)2147483647);
    // printf("\n%d\n", a);
	
    // a = ft_printf("%x\n", (int)2147483648);
    // printf("\n%d\n", a);
	
    // a = ft_printf("%x\n", (int)-2147483648);
    // printf("\n%d\n", a);

    // a = ft_printf("%x\n", (int)-2147483649);
    // printf("\n%d\n", a);
	
    // a = ft_printf("%x\n", (int)0xFFFFFFFF);
    // printf("Letzer: \n%d\n", a);
	
	// a = ft_printf("%x", 0);
	// printf("\n%d\n", a);

	// a = ft_printf("%x", 1);
	// printf("\n%d\n", a);
	
	// a = ft_printf("%x", 10);
	// printf("\n%d\n", a);
	
	// a = ft_printf("%x", 16);
	// printf("\n%d\n", a);
	
	// a = ft_printf("%x", 160);
	// printf("\n%d\n", a);
	
	// a = ft_printf("%x", 255);
	// printf("\n%d\n", a);
	
	// a = ft_printf("%x", 256);
	// printf("\n%d\n", a);
	
	// a = ft_printf("%x", 3735929054u);  
	// printf("\n%d\n", a);
	
	// a = ft_printf("the password is %x", 3735929054u);	  
	// printf("\n%d\n", a);
	
	// a = ft_printf("%x is the definitive answer", 66u); 
	// printf("\n%d\n", a);
	
	// a = ft_printf("this is the real number: %x", -1u);
	// printf("\n%d\n", a);

	// a = ft_printf("%X", 0);
	// printf("\n%d\n", a);
	
	// a = ft_printf("%X", 1);
	// printf("\n%d\n", a);
	
	// a = ft_printf("%X", 10);
	// printf("\n%d\n", a);

	// a = ft_printf("%X", 16);
	// printf("\n%d\n", a);
	
	// a = ft_printf("%X", 160);
	// printf("\n%d\n", a);

	// a = ft_printf("%X", 255);
	// printf("\n%d\n", a);
	
	// a = ft_printf("%X", 256);
	// printf("\n%d\n", a);

	// a = ft_printf("%X", (unsigned int)3735929054);
	// printf("\n%d\n", a);
	
	// a = ft_printf("the password is %X", (unsigned int)3735929054);
	// printf("\n%d\n", a);

	// a = ft_printf("%X is the definitive answer", (unsigned int)66);
	// printf("\n%d\n", a);

	// a = ft_printf("this is the real number: %X", (unsigned int)-1);
	// printf("\n%d\n", a);
}