# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozcan <oozcan@student.42kocaeli.com.tr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 14:04:11 by oozcan            #+#    #+#              #
#    Updated: 2022/04/12 14:04:13 by oozcan           ###   ########.tr        #
#                                                                              #
# **************************************************************************** #

SRC_SERVER = server.c m_utils.c m_utils2.c
SRC_CLIENT = client.c m_utils.c m_utils2.c

NAME_SERVER = server
NAME_CLIENT = client

OBJ_SERVER = server.o m_utils.o m_utils2.o
OBJ_CLIENT = client.o m_utils.o m_utils2.o

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_SERVER): $(OBJ_SERVER)
	$(CC) $(CFLAGS) $(SRC_SERVER) -o server

$(NAME_CLIENT): $(OBJ_CLIENT)
	$(CC) $(CFLAGS) $(SRC_CLIENT) -o client

clean:
	rm -f $(OBJ_SERVER) $(OBJ_CLIENT)
fclean: clean
	rm -f $(NAME_CLIENT) $(NAME_SERVER)
re: fclean all

.PHONY: server client all re fclean  clean
