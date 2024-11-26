SRCS = \
ft_isalpha.c \
ft_isdigit.c \
ft_isalnum.c \
ft_isascii.c \
ft_isprint.c \
ft_strlen.c	 \
ft_memset.c  \
ft_bzero.c   \
ft_memcpy.c  \
ft_memmove.c \
ft_strlcpy.c \

NAME = libft.a
OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	ar rcs libft.a $(OBJS)

.c.o:
	cc -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
