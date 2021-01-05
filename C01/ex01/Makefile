# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/10 18:04:40 by user42            #+#    #+#              #
#    Updated: 2021/01/05 08:08:54 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	plumber

SRCS		=	*.cpp

CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror -std=c++98

all			:	$(NAME)

$(NAME)		:
				$(CC) $(FLAGS) $(SRCS) -o $(NAME) && echo "" && ./$(NAME)

clean		:	
				rm -f $(NAME)

re			:	clean all
