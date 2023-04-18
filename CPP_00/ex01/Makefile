NAME = directory 

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -rf

SRCS = Contact.Class.cpp PhoneBook.Class.cpp My_Directory.cpp
SRCS_PATH = Srcs

OBJS = ${patsubst %.cpp, ${OBJS_PATH}/%.o, ${SRCS}}
OBJS_PATH = Objs

DEPS = $(OBJS:.o=.d)

INCLUDES = -I Includes

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

$(OBJS_PATH)/%.o: $(SRCS_PATH)/%.cpp
				@ mkdir -p ${dir $@}
				@ ${CC} ${CFLAGS} -c $< -o $@ $(INCLUDES)
				clear

${NAME} : ${OBJS}
#	@ echo "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)"
	@ echo "$(YELLOW_MAC) 	- Compiling $(NAME)... $(RESET_MAC)"
	@ $(CC) -o $(NAME) ${OBJS} 
#	@ echo "$(CURSIVE)$(GREEN) 	- Ready to execute $(NAME)... $(RESET)"
	@ echo "$(GREEN_MAC) 	- Ready to execute $(NAME)... $(RESET_MAC)"


clean : 
	@ ${RM} $(OBJS_PATH)
	clear


fclean : clean
	@$(RM) $(NAME)

re : fclean all