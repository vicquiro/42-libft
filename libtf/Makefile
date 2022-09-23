######################################################
CC = gcc
CFLAGS = -Wall -Wextra -Werror
CFILES = ${wildcard *.c}
HDRS = libft.h
OBJS = ${CFILES:.c=.o} 
LIB = libft.a
RM		= rm -f
######################################################
.PHONY: all re fclean clean
######################################################
all:	${LIB}

${LIB}:		${OBJS}
		@ar rc ${LIB} ${OBJS}
		@ranlib ${LIB}
.c.o:
			@${CC} ${CFLAGS} -c $< -o ${<:.c=.o} 

re:				fclean all

fclean:		clean
			@$(RM) ${LIB}

clean:
			@$(RM) $(OBJS)
