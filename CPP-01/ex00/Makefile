
NAME := ex00
C := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98
INC:= -I.
SRCS:= Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJS := $(SRCS:.cpp=.o)
##########################################################################

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	c++ $(CFLAGS) -c $< -o $@

clean:
	   rm -f ${OBJS}

fclean:	clean
	   rm -f ${NAME} ${OBJS}

re: clean all
