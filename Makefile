CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -std=c11 -O2

TARGET = app

SRC = main.c scripting.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c scripting.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

re: clean all

.PHONY: all clean re

