NAME		= Character
CC			= clang++
RM			= rm -rf
OBJS_DIR	= ./objects
CFLAGS		= -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

SRCSCPP		=	main.cpp \
				AWeapon.cpp \
				Character.cpp \
				Enemy.cpp \
				PlasmaRifle.cpp \
				PowerFist.cpp \
				RadScorpion.cpp \
				SuperMutant.cpp \


OBJS		= ${SRCSCPP:%.cpp=${OBJS_DIR}/%.o}

${OBJS_DIR}/%.o: %.cpp
			@mkdir -p ${@D}
			${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}

run:		${NAME}
			@echo "\033[0;34mRunning ${NAME}...\033[0;0m"
			@./${NAME}

all:		${NAME}

clean:
			@${RM} ${OBJS} ${OBJS_DIR}
			@printf "\033[0;35mPROJECT\033[0;0m:      \033[0;32mCleaned\033[0;0m\n"

fclean:		clean
			@${RM} ${NAME}

re:			fclean all

silent:
			@:

.PHONY:		all clean fclean re bonus rc