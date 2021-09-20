
CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = ft_display_file

all: $(TARGET)

$(TARGET): main.o
	$(CC) $(CFLAGS) -o $@ main.o

main.o: main.c
	$(CC) $(CFLAGS) -o main.o -c  main.c

clean:
	rm -f main.o

fclean: clean
	rm -f $(TARGET)
