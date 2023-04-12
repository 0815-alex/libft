NAME = libft.a

SRCS = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra -c

%.o : %.c
	cc $(CFLAGS) $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar -crs $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re
