FLAGS= -Wall -Wextra -Werror -std=c++98
CC= c++
SRC= Fixed.cpp \
	 main.cpp \
	 Point.cpp \
	 bsp.cpp

all: compile

compile:
	@$(CC) $(FLAGS) $(SRC) -o bsp

clean:
	@rm -rf bsp