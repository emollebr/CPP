
NAME := ex01
CFLAGS := c++ -Wall -Wextra -Werror -std=c++98
INC:= -I.
SRCS:= Contact.cpp PhoneBook.cpp main.cpp
OBJS := $(SRCS:.cpp=.o)
##########################################################################

all: $(NAME)

${NAME}:	${OBJS}
	${CFLAGS} $^ -o ${NAME}

.c.o:   ${SRCS}
	cc ${CFLAGS} -I. -c -o $@ $<

clean:
	   rm -f ${OBJS}

fclean:
	   rm -f ${NAME} ${OBJS}

re: clean all