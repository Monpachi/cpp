NAME = array

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

all : ${NAME}

${NAME} : ${OBJS}
	c++ -Wall -Wextra -Werror -std=c++98 ${OBJS} -o ${NAME}

# Define dependencies of object files on source files
%.o: %.cpp
	c++ -c -Wall -Wextra -Werror -std=c++98 $< -o $@

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re
