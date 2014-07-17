#clang -arch i386 -arch x86_64 -shared -Wall slow.c -o slow.dylib

CC = clang
CFLAGS = -arch i386 -arch x86_64 -shared -Wall
TARGET = libsnailio
SRC = src/$(TARGET).c
OUTPUT = lib/$(TARGET).dylib

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(OUTPUT) $(SRC)