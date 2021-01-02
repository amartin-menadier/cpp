# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/10 18:04:40 by user42            #+#    #+#              #
#    Updated: 2020/12/10 18:48:05 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

SRCS		=	*.cpp

CC			=	clang++

FLAGS		=	-Wall -Wextra -Werror

all			:	$(NAME)

$(NAME)		:
				$(CC) $(FLAGS) $(SRCS) -o $(NAME) 

clean		:	
				rm -f $(NAME)

re			:	clean all
