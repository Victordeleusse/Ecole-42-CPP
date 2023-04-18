NAME = megaphone 

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -rf

SRCS = megaphone.cpp

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m

.PHONY : all clean fclean re

all : ${NAME}

${NAME} : 
	@ echo "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)"
	@ $(CC) $(CFLAGS) ${SRCS} -o $(NAME)
	@ echo "$(CURSIVE)$(GREEN) 	- Ready to execute $(NAME)... $(RESET)"

clean : 
	@ ${RM} $(NAME)

fclean :
	@$(RM) $(NAME)

re : clean all
