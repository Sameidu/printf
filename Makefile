NAME = libftprintf.a

CC = CC

CFLAG = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_alpha.c ft_numbers.c ft_format.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAG) $(SRCS)

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re