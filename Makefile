# Makefile for libft.a

# Compiler options
CC = cc
CFLAGS = -Wall -Werror -Wextra -g #-pg -fsanitize=address -fsanitize-address-use-after-scope
RM = rm -f

# Color codes
RED    = 	\033[0;31m
GREEN  = 	\033[0;32m
ORANGE = 	\033[0;33m
BLUE   = 	\033[34m
PURPLE = 	\033[35m
RESET  = 	\033[0m

# Library name and source files
NAME = libft.a
SRC_FOLDER = ./src/
OBJS_FOLDER = ./obj/
SRCS = $(addprefix $(SRC_FOLDER), \
	ft_atoi.c \
	ft_btoa.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_chr2str.c \
	ft_dtoa.c \
	ft_free.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_lstadd_back.c \
	ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnew.c \
	ft_lstsize.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_printf.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_size_matrix.c \
	ft_split.c \
	ft_str_replace_chars.c \
	ft_strcat_multi.c \
	ft_strchr.c \
	ft_strcmp_strict.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strcmp.c \
	ft_strncmp.c \
	ft_str_is_numeric.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_swap_strings.c \
	get_next_line.c \
	get_next_line_utils.c \
	print_char.c \
	print_dez_to_hexa.c \
	print_nbr.c \
	print_ptr.c \
	print_str.c \
	print_header.c)

# Object files
OBJS = $(SRCS:$(SRC_FOLDER)%.c=$(OBJS_FOLDER)%.o)

# Targets
.PHONY:	all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@ar -crs $@ $^
	@echo "\n$(BLUE)╔═══════════════════════╗"
	@echo "$(BLUE)║   $(GREEN)$(NAME):  created$(BLUE)   ║"
	@echo "$(BLUE)╚═══════════════════════╝"

$(OBJS_FOLDER)%.o: $(SRC_FOLDER)%.c
	@mkdir -p $(@D)
	@echo -n "$(ORANGE).$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
