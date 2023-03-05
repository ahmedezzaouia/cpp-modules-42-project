# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/25 18:56:36 by ahmez-za          #+#    #+#              #
#    Updated: 2022/10/03 04:37:34 by ahmez-za         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp
NAME = Polymorfism
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror  -std=c++98 -fsanitize=address
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME) $(CXXFLAGS) 

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)
	
re: fclean all