# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: francesco <francesco@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 20:00:47 by francesco         #+#    #+#              #
#    Updated: 2024/02/25 20:15:08 by francesco        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = main.cpp
OBJ = main.o
NAME = ft_sed

all : $(NAME)

re : fclean all

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
$(OBJ) : $(SRC)
	$(CC) $(FLAGS) -c $(SRC)
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)