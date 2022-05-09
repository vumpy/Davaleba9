

CC = gcc
CFLAGS = -Wall

all: heaxToInt
.PHONY : all

hexaToInt: mgetline.o dv1.o
	$(CC) $(CFLAGS) -o hexaToInt mgetline.o dv1.o
	
mgetline.o : mgetline.c
	$(CC) $(CFLAGS) -c -o mgetline.c mgetline.o
	
dv1.o: dv1.c
	$(CC) $(CFLAGS) -c -o dv1.c dv1.o
	
debug: clean mgetline.c dv1.c
	$(CC) $(CFLAGS) -g -o test dv1.c mgetline.c
	gdb -tui test

.PHONY: clean
clean:
	rm -rf *.o
