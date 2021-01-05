# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/10 18:04:40 by user42            #+#    #+#              #
#    Updated: 2021/01/05 16:45:50 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	battle

SRCS		=	*.cpp

CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address

all			:	$(NAME)

$(NAME)		:
				$(CC) $(FLAGS) $(SRCS) -o $(NAME) && echo "" && ./$(NAME)

clean		:	
				rm -f $(NAME)

re			:	clean all
