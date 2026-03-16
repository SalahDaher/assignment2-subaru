CC = $(CROSS_COMPILE)gcc
CFLAGS = -g -Wall

TARGET = writer

all: $(TARGET)

$(TARGET): writer.c
	$(CC) $(CFLAGS) -o writer writer.c

clean:
	rm ./$(TARGET)