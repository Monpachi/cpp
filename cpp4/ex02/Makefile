NAME = Animal

SRCS =	Dog.cpp \
		main.cpp \
		AAnimal.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		Brain.cpp
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
