NAME := ex04
C := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98 
INC:= -I.
SRCS:= main.cpp
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

test: test-0 test-1 test-2 test-3 test-4 cleantest

cleantest:
	rm -f test-* *.replace

test-0: 
	echo "cat says miau" > test-0 && ./ex04 test-0 miau woof && cat test-0.replace

test-1:
	echo "hello world!" > test-1 && ./ex04 test-1 hello hi && cat test-1.replace

test-2:
	echo "apple, banana, cherry" > test-2 && ./ex04 test-2 apple orange && cat test-2.replace

test-3:
	echo "The quick brown fox jumps over the lazy dog." > test-3 && ./ex04 test-3 quick slow && cat test-3.replace

test-4:
	echo "This is a test file." > test-4 && ./ex04 test-4 test trial && cat test-4.replace