

CC = gcc
CFLAGS = -Wall

all: squeeze
.PHONY : all

squeeze: mgetline.o dv2.o
	$(CC) $(CFLAGS) -o squeeze mgetline.o dv2.o
	
mgetline.o : mgetline.c
	$(CC) $(CFLAGS) -c -o mgetline.c mgetline.o
	
dv2.o: dv2.c
	$(CC) $(CFLAGS) -c -o dv2.c dv2.o
	
debug: clean mgetline.c dv2.c
	$(CC) $(CFLAGS) -g -o test dv2.c mgetline.c
	gdb -tui test

.PHONY: clean
clean:
	rm -rf *.o
