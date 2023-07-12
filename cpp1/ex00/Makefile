NAME = Zombie

SRCS =	Zombie.cpp\
		main.cpp\
		newZombie.cpp\
		randomChump.cpp


OBJS = $(SRCS:.cpp=.o)

# c++ -Wall -Wextra -Werror -std=c++98 ${SRCS} -o ${NAME}
all : ${SRCS}
	c++ -std=c++98 ${SRCS} -o ${NAME}

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re
