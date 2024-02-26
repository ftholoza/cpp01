# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: francesco <francesco@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 15:13:33 by francesco         #+#    #+#              #
#    Updated: 2024/02/25 20:09:40 by francesco        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = g++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp 
OBJ = $(SRC:.cpp=.o)
INCLUDES = HumanA.hpp HumanB.hpp Weapon.hpp
NAME = Unnecessary_violence

all : $(NAME)

re :fclean $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
clean :
	rm -f $(OBJ) HumanA.hpp.gch HumanB.hpp.gch Weapon.hpp.gch
fclean: clean
	rm -rf $(NAME)