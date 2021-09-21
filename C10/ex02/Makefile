# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/21 15:58:47 by sooykim           #+#    #+#              #
#    Updated: 2021/09/21 21:55:54 by sooykim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFFIXES = .c .o

CC = gcc

SRCDIR = src/
INC = include/
LIBS = lib/

TARGET_SRC := $(SRCDIR)main.c
TARGET_OBJ := $(SRCDIR)main.o
STATIC_LIB := $(LIBS)libtail.a

SRCS_FOR_LIB:=$(SRCDIR)utility.c $(SRCDIR)parse.c
OBJS_FOR_LIB:=$(SRCS_FOR_LIB:.c=.o)

CFLAGS += -Wall -Wextra -Werror -I $(INC)

TARGET=ft_tail

all: $(TARGET)

$(TARGET): $(TARGET_OBJ) $(STATIC_LIB)
	$(CC) $(CFLAGS) -o $@ $< -L $(LIBS) -ltail

$(SRCDIR)%.o: $(SRCDIR)%.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean:
	rm -f $(OBJS_FOR_LIB) $(TARGET_OBJ) $(LIBS)*

fclean: clean
	rm -f $(TARGET)

$(STATIC_LIB): $(OBJS_FOR_LIB)
	ar rc $@ $^