NAME = libft.a

SRCS = ft_isalpha.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

%.o : %.c
	cc $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar -crs $@ $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY all clean fclean re