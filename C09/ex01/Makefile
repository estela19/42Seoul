# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sooykim <sooykim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/19 16:05:13 by sooykim           #+#    #+#              #
#    Updated: 2021/09/19 17:17:18 by sooykim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

SRCDIR = srcs/
INC = includes/

SRCS_FOR_LIB:=$(SRCDIR)ft_putchar.c $(SRCDIR)ft_swap.c $(SRCDIR)ft_putstr.c $(SRCDIR)ft_strlen.c $(SRCDIR)ft_strcmp.c
OBJS_FOR_LIB:=$(SRCS_FOR_LIB:.c=.o)

CFLAGS = -Wall -Wextra -Werror -c -I $(INC)

TARGET=libft.a

all: $(TARGET)

$(TARGET): $(OBJS_FOR_LIB)
	ar cr $@ $^

$(SRCDIR)%.o: $(SRCDIR)%.c
	$(CC) $(CFLAGS) -o $@ -c $^

clean:
	rm -f $(OBJS_FOR_LIB)

fclean: clean
	rm -f $(TARGET)

re: fclean	all