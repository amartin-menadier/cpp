NAME		=	pony

SRCS		=	*.cpp

CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

all			:	$(NAME)

$(NAME)		:
				$(CC) $(FLAGS) $(SRCS) -o $(NAME) && echo "" && ./$(NAME)

clean		:	
				rm -f $(NAME)

re			:	clean all
