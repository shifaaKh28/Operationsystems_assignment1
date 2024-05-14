CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: part1 part2 part3

part1: part1.o
	$(CC) $(CFLAGS) -o $@ $^

part2: part2.o
	$(CC) $(CFLAGS) -o $@ $^

part3: part3.o
	$(CC) $(CFLAGS) -o $@ $^

part1.o: part1.c
	$(CC) $(CFLAGS) -c $<

part2.o: part2.c
	$(CC) $(CFLAGS) -c $<

part3.o: part3.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f part1 part2 part3 *.o core
