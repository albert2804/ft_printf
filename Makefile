# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aestraic <aestraic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 13:20:07 by aestraic          #+#    #+#              #
#    Updated: 2022/07/07 14:59:11 by aestraic         ###   ########.fr        #
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
OBJ = $(COMPILED)

all:  libft obj archive

obj: $(OBJ)
%.o : %.c 
	cc -Wall -Wextra -Werror -I$(HEADER_PATH) -c $^ 	
	
libft:
#	@echo MAKE LIBFT
	@make all -C libft	

archive:
	@ar -rucv $(NAME) $(OBJ)$^
	
clean:
	make clean -C libft
	rm -f $(COMPILED)
 
fclean: clean
	make fclean -C libft
	rm -f $(NAME)
 
re: fclean all

.PHONY: clean fclean re bonus libft archive