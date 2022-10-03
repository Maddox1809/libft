NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	ft_strlen.c ft_memset.c ft_memcpy.c ft_bzero.c ft_strlcpy.c ft_memmove.c\
	ft_memchr.c ft_memcmp.c
OBJS = ${SRCS:.c=.o}

OBJSBONUS = ${BONUS:.c=.o}

CC        = gcc
RM        = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS} ${OBJSBONUS}

fclean:    clean
		${RM} ${NAME}

re:        fclean all
