# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ofarhat <ofarhat@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 17:23:13 by ofarhat           #+#    #+#              #
#    Updated: 2024/03/01 19:43:19 by ofarhat          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
NAME = phonebook
SRCS = main.cpp PhoneBook.cpp Contact.cpp check.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re