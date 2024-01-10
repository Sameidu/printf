# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smeixoei <smeixoei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/10 17:08:17 by smeixoei          #+#    #+#              #
#    Updated: 2024/01/10 17:55:42 by smeixoei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
FLAGS = -Wall -Werror -Wextra
LIB = ar -rcs
RM = rm -f
INCLUDES = ft_printf.h
SRCS_MAIN = ft_printf.c \
			ft_numbers.c

OBJS = $(SRCS_MAIN:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) -c $(FLAGS) $?

$(NAME): $(OBJS) $(INCLUDES)
		$(LIB) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re