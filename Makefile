CC = gcc -m32
CFLAGS = -Wall -Wextra -Werror -Wpedantic
TARGET = data_buffer
SRCS = main.c buffer.c
OBJS = $(SRCS:.c=.o)
HEADERS = buffer.h

.PHONY: build run clean all

all: build run

build: $(TARGET)
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

$.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)
	
clean:
	rm -f $(OBJS) $(TARGET)
