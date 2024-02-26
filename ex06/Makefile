# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: francesco <francesco@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 20:31:13 by francesco         #+#    #+#              #
#    Updated: 2024/02/25 22:23:22 by francesco        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)
INCLUDES = Harl.hpp
NAME = harlFilter

all : $(NAME)

re :fclean $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean :
	rm -f $(OBJ) $(INCLUDES).gch
fclean: clean
	rm -rf $(NAME)