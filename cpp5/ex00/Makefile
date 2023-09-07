NAME = Bureaucrat

SRCS =	Bureaucrat.cpp \
		main.cpp

OBJS = $(SRCS:.cpp=.o)

all : ${SRCS}
	# c++ -Wall -Wextra -Werror -std=c++98 ${SRCS} -o ${NAME}
	c++ -std=c++98 ${SRCS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re
