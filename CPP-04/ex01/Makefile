NAME := ex00
C := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98 
INC:= -I.
SRCS:= main.cpp Animal.cpp Dog.cpp Cat.cpp \
	WrongAnimal.cpp WrongDog.cpp WrongCat.cpp \
	Brain.cpp
OBJS := $(SRCS:.cpp=.o)
##########################################################################

all: $(NAME)

${NAME}: ${OBJS}
	${C} ${CFLAGS} ${INC} $^ -o ${NAME}

.cpp.o: ${SRCS}
	${C} ${CFLAGS} ${INC} -c -o $@ $<
clean:
	   rm -f ${OBJS}

fclean:	clean
	   rm -f ${NAME} ${OBJS}

re: clean all