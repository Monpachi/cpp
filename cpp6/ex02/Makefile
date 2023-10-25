SRCS			=	main.cpp Base.cpp
OBJS			= 	${SRCS:.cpp=.o}
NAME			= 	convert
CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -std=c++98 -g

all:		$(NAME)

.cpp.o:
			${CC} ${CFLAGS} -c $< -o ${<:.cpp=.o} 

$(NAME):	${OBJS}
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean
			make all

.PHONY:		all clean fclean re