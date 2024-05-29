# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ftholoza <ftholoza@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 20:00:47 by francesco         #+#    #+#              #
#    Updated: 2024/05/29 20:11:09 by ftholoza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
SRC = main.cpp
OBJ = main.o
NAME = ft_sed

all : $(NAME)

re : fclean all

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
$(OBJ) : $(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC)
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)