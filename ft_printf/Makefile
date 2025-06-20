# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gisidro- <gisidro-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/02 11:08:18 by gisidro-          #+#    #+#              #
#    Updated: 2025/05/06 16:09:54 by gisidro-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c \
		ft_p_char.c \
		ft_p_string.c \
		ft_p_pointer.c \
		ft_p_integer.c \
		ft_p_unsigned.c \
		ft_p_hexadecimal.c

OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
AR = ar rc
RN = ranlib

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@$(RN) $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o  $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re