# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/25 00:49:36 by sooykim           #+#    #+#              #
#    Updated: 2021/09/25 01:03:16 by sooykim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SUFFIXES = .c .o

CC = gcc

SRCDIR = src/
INC = include/
LIBS = lib/

TARGET_SRC := $(SRCDIR)main.c
TARGET_OBJ := $(SRCDIR)main.o
STATIC_LIB := $(LIBS)libop.a

SRCS_FOR_LIB := $(SRCDIR)operator.c $(SRCDIR)parser.c $(SRCDIR)utility.c
OBJS_FOR_LIB := $(SRCS_FOR_LIB:.c=.o)

CFLAGS += -Wall -Werror -Werror -I $(INC)

TARGET=do-op

all: $(TARGET)

$(TARGET): $(TARGET_OBJ) $(STATIC_LIB)
	$(CC) $(CFLAGS) -o $@ $< -L $(LIBS) -lop

$(SRCDIR)%.o: $(SRCDIR)%.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean:
	rm -f $(OBJS_FOR_LIB) $(TARGET_OBJ) $(LIBS)*

fclean: clean
	rm -f $(TARGET)

$(STATIC_LIB): $(OBJS_FOR_LIB)
	ar rc $@ $^