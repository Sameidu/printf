NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

SRCS = ft_printf.c \
		ft_alpha.c \
		ft_numbers.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $< -o $@
	ar -crs $(NAME) $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY : clean fclean re