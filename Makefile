NAME		= libftprintf.a

SCRS		= ft_print_chars.c ft_print_dui.c ft_printf.c ft_putchar_fd.c ft_puthex.c ft_putnbr_fd.c ft_putnbr_unsigned_fd.c ft_itoa.c ft_strdup.c ft_strlen.c ft_utoa.c

OBJS		= ${SCRS:.c=.o}

CFLAGS		= -c -Wall -Werror -Wextra

CC			= cc

RM			= rm -f

.c.o:
			${CC}  ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re