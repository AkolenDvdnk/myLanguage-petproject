CC=g++
INCDIRS=-I.
OPT=-O0
CFLAGS=-Wall -Wextra -g $(INCDIRS) $(OPT)

CFILES=main.c chunk.c memory.c value.c debug.c vm.c scanner.c compiler.c object.c table.c
OBJECTS=main.o chunk.o memory.o value.o debug.o vm.o scanner.o compiler.o object.o table.o

BINARY=bin

all: $(BINARY)

$(BINARY): $(OBJECTS)
	$(CC) -o $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(BINARY) $(OBJECTS)