# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aestraic <aestraic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 13:20:07 by aestraic          #+#    #+#              #
#    Updated: 2022/07/05 19:32:55 by aestraic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
 
SRC = 	ft_conv_character.c\
		ft_conv_hex1.c\
		ft_conv_int.c\
		ft_conv_pointer.c\
		ft_conv_str.c\
		ft_conv_unsigned.c\
		ft_printf.c

HEADER_PATH = header
COMPILED = $(SRC:.c=.o)

all: libft $(NAME)

libft:
	@make all -C libft		
%.o: %.c
	cc -Wall -Wextra -Werror -I $(HEADER_PATH) -c $^ -o $@


$(NAME):$(COMPILED)
	@ar -rucv $(NAME) $^
	@ar -rucv $(NAME) libft/*.o $^

clean:
	make clean -C libft
	rm -f $(COMPILED)
 
fclean: clean
	make fclean -C libft
	rm -f $(NAME)
 
re: fclean all

.PHONY: clean fclean re bonus libft