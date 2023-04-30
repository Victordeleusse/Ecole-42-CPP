NAME = Fixed

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 
RM = rm -rf

SRCS = Fixed.cpp main.cpp

OBJS = ${patsubst %.cpp, %.o, ${SRCS}}

DEPS = $(OBJS:.o=.d)

#Colors:
GREEN		=	\e[92;5;118m
GREEN_MAC	=	\033[32m 
YELLOW		=	\e[93;5;226m
YELLOW_MAC	=	\033[33m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
RESET_MAC   =	\033[0m
CURSIVE		=	\e[33;3m

.PHONY : all clean fclean re

all : ${NAME}

%.o: %.cpp
	@ ${CC} ${CFLAGS} -c $< -o $@
	clear

${NAME} : ${OBJS}
	@ echo "$(YELLOW) 	- Compiling $(NAME)... $(RESET)"
	@ $(CC) -o $(NAME) ${OBJS} 
	@ echo "$(GREEN) 	- Ready to execute $(NAME)... $(RESET)"

clean : 
	@ ${RM} ${OBJS}
	@ ${RM} *replace
	clear

fclean : clean
	@$(RM) $(NAME)

re : fclean all
