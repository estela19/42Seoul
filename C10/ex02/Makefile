# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/21 15:58:47 by sooykim           #+#    #+#              #
#    Updated: 2021/09/21 17:38:31 by sooykim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

SRCDIR = src/
INC = include/

#TARGET_SRC := $(SRCDIR)main.c
#TARGET_OBJ := $(SRCDIR)main.o

SRCS := $(SRCDIR)parse.c $(SRCDIR)utility.c $(SRCDIR)main.c
OBJS := $(SRCS:.c = .o)

CFLAGS += -Wall -Wextra -Werror -I $(INC)

TARGET = main

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $<

$(SRCDIR)%.o: $(SRCDIR)%.c $(INC)%.h $(INC)tail.h
	$(CC) ${CFLAGS} -o $@ -c $^

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)