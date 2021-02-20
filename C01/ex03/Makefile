NAME		=	zombieHordes

SRCS		=	*.cpp

CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address

all			:	$(NAME)

$(NAME)		:
				$(CC) $(FLAGS) $(SRCS) -o $(NAME) && echo "" && ./$(NAME)

clean		:	
				rm -f $(NAME)

re			:	clean all
