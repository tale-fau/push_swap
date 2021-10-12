# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tale-fau <tale-fau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 14:22:52 by tale-fau          #+#    #+#              #
#    Updated: 2021/10/12 17:25:12 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	        =		push_swap

SRCS            =       $(wildcard srcs/*.c)

INCLUDES_DIR     =       includes/

LIB_DIR         =       libft/

LIBFT           =       libft/libft.a

CC              =       gcc

OBJS            =       ${SRCS:.c=.o}

RM          =       rm -rf

FLAGS       =       -Wall -Wextra -Werror -g3

.c.o:
					@${CC} ${FLAGS} -I${INCLUDES_DIR} -c $< -o ${<:.c=.o}
					@echo "\x1b[32m[LOADED]\033[0m ${<:.s=.o}"

all:			${NAME}

${NAME}:		${OBJS}
						@make -C ${LIB_DIR} 2>/dev/null
						@make -C ${LIB_DIR} bonus 2>/dev/null
						@${CC} ${FLAGS} -I${INCLUDES_DIR} -o ${NAME} ${OBJS} ${LIBFT}
						@echo "\nlibft.a has been created"
						@echo "push_swap has been created"

clean:
						@make -C ${LIB_DIR} clean
						@${RM} ${OBJS} ${OBJS_B}
						@echo "\n *.o files deleted\n"

fclean:		clean
						@make -C ${LIB_DIR} fclean
						@${RM} ${NAME} ${NAME_B}
						@echo "\nPrograms The libft and push_swap have been deleted\n"

re:		fclean all

.PHONY:           all     clean   fclean  re
