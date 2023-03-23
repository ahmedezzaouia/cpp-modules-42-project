# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahmez-za <ahmez-za@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/25 18:56:36 by ahmez-za          #+#    #+#              #
#    Updated: 2022/10/01 02:51:26 by ahmez-za         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp Span.cpp
NAME = Span
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror  -std=c++98 
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME) $(CXXFLAGS) 

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)
	
re: fclean all