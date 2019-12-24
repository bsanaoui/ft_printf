# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/12 15:19:04 by bsanaoui          #+#    #+#              #
#    Updated: 2019/11/12 15:21:14 by bsanaoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all fclean clean re bonus
NAME = libftprintf.a
CC = gcc
FLAGS =	-Werror -Wextra -Wall 

# ****************************  SOURCEs ******************************* #

CONVERSIONS_FUNC_SRC = 	conversion/conversion_char.c \
						conversion/conversion_string.c \
						conversion/conversion_d.c \
						conversion/conversion_u.c \
						conversion/conversion_p.c \
						conversion/conversion_perc.c \
						conversion/conversion_x_l.c \
						conversion/conversion_x_u.c

DISPLAY_FUNC_SRC = 		display/print_char.c \
						display/print_string.c \
						display/print_d.c

LIBFT_FUNC_SRC = 		libft/ft_putchar.c \
						libft/ft_isdigit.c \
						libft/ft_atoi.c \
						libft/ft_putstr.c \
						libft/ft_strlen.c \
						libft/ft_substr.c \
						libft/ft_putnbr.c \
						libft/ft_itoa.c \
						libft/ft_strjoin.c \
						libft/ft_strdup.c \
						libft/ft_memcpy.c \
						libft/ft_itoa_u.c \
						libft/ft_itoa_long.c \
						libft/ft_strrev.c
						
FLAG_FUNC_SRC =			flag/is_flag.c \
						flag/width_nb_flag.c \
						flag/preci_nb_flag.c \
						flag/sign_flag.c \

MATH_FUNC_SRC =			math/ft_max.c \
						math/ft_abs.c

UTILS_FUNC_SRC = 		utils/ft_zero.c \
						utils/zero_to_nb.c \
						utils/to_hexa.c \
						utils/ft_free.c \
						utils/len_nbr.c

# ****************************  OBJECTs ******************************* #

CONVERSIONS_FUNC_OBJ = 	conversion_char.o \
						conversion_string.o \
						conversion_d.o \
						conversion_u.o \
						conversion_p.o \
						conversion_perc.o \
						conversion_x_l.o \
						conversion_x_u.o

DISPLAY_FUNC_OBJ = 		print_char.o \
						print_string.o \
						print_d.o

LIBFT_FUNC_OBJ = 		ft_putchar.o \
						ft_isdigit.o \
						ft_atoi.o \
						ft_putstr.o \
						ft_strlen.o \
						ft_substr.o \
						ft_putnbr.o \
						ft_itoa.o \
						ft_strjoin.o \
						ft_strdup.o \
						ft_memcpy.o \
						ft_itoa_u.o \
						ft_itoa_long.o \
						ft_strrev.o
						
FLAG_FUNC_OBJ =			is_flag.o \
						width_nb_flag.o \
						preci_nb_flag.o \
						sign_flag.o

MATH_FUNC_OBJ =			ft_max.o \
						ft_abs.o

UTILS_FUNC_OBJ = 		ft_zero.o \
						zero_to_nb.o \
						to_hexa.o \
						ft_free.o \
						len_nbr.o

# *************************** SRC && OBJ ******************************* #

SRC = 					ft_printf.c ft_printf_utils.c \
						$(CONVERSIONS_FUNC_SRC) $(DISPLAY_FUNC_SRC) \
						$(LIBFT_FUNC_SRC) $(FLAG_FUNC_SRC) $(MATH_FUNC_SRC) \
						$(UTILS_FUNC_SRC)

OBJ =					ft_printf.o ft_printf_utils.o \
						$(CONVERSIONS_FUNC_OBJ) $(DISPLAY_FUNC_OBJ) \
						$(LIBFT_FUNC_OBJ) $(FLAG_FUNC_OBJ) $(MATH_FUNC_OBJ) \
						$(UTILS_FUNC_OBJ)
			
all : $(NAME)

$(NAME):
	@$(CC) $(FLAGS) -c $(SRC) -I.
	@ar -rc $(NAME) $(OBJ)
	@ranlib	$(NAME)

fclean: clean
	@rm -f $(NAME)

clean:
	@rm -f *.o

re: fclean all

main: re
	@$(CC) $(FLAGS) main.c libftprintf.a
	@./a.out
	@make fclean
