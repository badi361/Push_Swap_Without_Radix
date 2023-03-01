SRCS			=	get_arg.c error_checker.c ft_atoi.c ft_split.c if_it.c push_swap.c \
					reverse_rotate.c push.c rotate.c swap.c four_arg.c small.c five_arg.c \
					six_and_more_arg.c \
					

OBJS			=	$(SRCS:.c=.o)

NAME			=	push_swap

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

RM				=	rm -rf

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:			
				$(RM) $(OBJS)

fclean:			clean
						$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re