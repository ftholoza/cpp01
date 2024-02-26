# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: francesco <francesco@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 15:13:33 by francesco         #+#    #+#              #
#    Updated: 2024/02/24 14:48:16 by francesco        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJ = $(SRC:.cpp=.o)
INCLUDES = Zombie.hpp
NAME = BraiiiiiiizzzZ

all : $(NAME)

re :fclean $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean :
	rm -f $(OBJ) $(INCLUDES).gch
fclean: clean
	rm -rf $(NAME)