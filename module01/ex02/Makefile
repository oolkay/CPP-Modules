DEFAULT = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m


NAME = brain
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: ${NAME}

${NAME}: ${OBJ}
	@echo "${MAGENTA}🧑‍💻Compilation has started🧑‍💻${DEFAULT}"
	@sleep 0.4
	@${CC} ${FLAGS} ${OBJ} -o ${NAME}
	@echo "${GREEN}🧠${NAME} IS READY!!🧠${DEFAULT}"
	@sleep 0.4

%.o: %.cpp
	@${CC} ${FLAGS} -c $< -o $@

clean:
	@rm -f ${OBJ}
	@echo "${RED}🗑️Object files are being deleted🗑️${DEFAULT}"
	@sleep 0.4

fclean: clean
	@rm -f ${NAME}
	@echo "${RED}🗑️Executable file is being deleted🗑️${DEFAULT}"
	@sleep 0.4

re: fclean all

.PHONY: all clean