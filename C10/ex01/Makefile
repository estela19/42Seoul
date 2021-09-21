# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/21 15:58:59 by sooykim           #+#    #+#              #
#    Updated: 2021/09/21 16:58:51 by sooykim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFAGS = -Wall -Wextra -Werror
TARGET = ft_cat

all: $(TARGET)

$(TARGET): main.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o

main.o: main.c
	$(CC) $(CFLAGS) -o main.o -c main.c

clean:
	rm -f main.o

fclean: clean
	rm -f $(TARGET)