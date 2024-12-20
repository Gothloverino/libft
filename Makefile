SRCS = 			\
ft_isalpha.c 	\
ft_isdigit.c 	\
ft_isalnum.c 	\
ft_isascii.c 	\
ft_isprint.c 	\
ft_strlen.c  	\
ft_memset.c  	\
ft_bzero.c   	\
ft_memcpy.c  	\
ft_memmove.c 	\
ft_strlcpy.c 	\
ft_toupper.c 	\
ft_tolower.c 	\
ft_strlcat.c 	\
ft_strjoin.c 	\
ft_substr.c  	\
ft_calloc.c		\
ft_strdup.c		\
ft_atoi.c		\
ft_strchr.c		\
ft_strnstr.c	\
ft_memcmp.c		\
ft_memchr.c		\
ft_strncmp.c	\
ft_strrchr.c	\
ft_strlcpy.c	\
ft_split.c		\
ft_itoa.c		\
ft_strtrim.c 	\
ft_strmapi.c	\
ft_striteri.c	\
ft_putchar_fd.c	\

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
