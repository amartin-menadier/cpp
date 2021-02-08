
NAME	=	moreUseful

SRC		=	${wildcard *.cpp}

OBJ		=	$(SRC:.cpp=.o)

CC		=	clang++

FLAGS	=	-Werror -Wall -Wextra -std=c++98 -fsanitize=address

all		:	$(NAME)

%o: %.c
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(NAME)	:	$(OBJ)
			$(CC) $(FLAGS) $(OBJ) -o $(NAME)

run		:	$(NAME)
			./$(NAME)

clean	:	
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all