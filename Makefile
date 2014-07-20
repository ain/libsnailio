CC = clang
CFLAGS = -arch i386 -arch x86_64 -shared -Wall
TARGET = libsnailio
SRC = src/$(TARGET).c
LIBRARY_PATH ?= lib
OUTPUT = $(LIBRARY_PATH)/$(TARGET).dylib

all: $(TARGET)

$(TARGET): $(SRC) | $(LIBRARY_PATH)
	$(CC) $(CFLAGS) -o $(OUTPUT) $(SRC)

$(LIBRARY_PATH):
	mkdir -p $(LIBRARY_PATH)