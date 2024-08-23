NAME		=	push_swap

LIB_PATH	=	libft/

LIB			=	${LIB_PATH}libft.a

NEW_LIB_PATH=	new_libft/

SORT	=	sortings/

INST	=	instructions/

OTHER = other_utils/

SRCS		=	push_swap.c ${OTHER}ft_atolong.c ${OTHER}ft_check_error.c ${OTHER}ft_give_position.c ${OTHER}ft_free.c \
				${SORT}quicksort.c ${SORT}small_sort.c ${SORT}big_sort.c \
				${INST}ft_pa_pb.c ${INST}ft_r_a_b_rr.c ${INST}ft_rra_rrb_rrr.c ${INST}ft_s_abss.c

HEADER		=	push_swap.h
OBJ			=	${SRCS:.c=.o}

CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -g3

RM			=	rm -rf

.PHONY		:	all subsystem clean fclean re

all			:	subsystem ${NAME}

subsystem	:	
				@make -C ${LIB_PATH} all

${NAME}		: 	${OBJ} ${HEADER}
				@${CC} ${CFLAGS} -I ${HEADER} ${OBJ} ${LIB} -o ${NAME}

clean		:
				@make -C ${LIB_PATH} clean
				@${RM} ${OBJ}

fclean		:	
				@make -C ${LIB_PATH} fclean
				@${RM} ${OBJ}
				@${RM} ${NAME}

re			:	fclean all
