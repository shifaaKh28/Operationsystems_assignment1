CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS = -lm

.PHONY: all clean

all: Poisson

Poisson: Poisson.o Poisson.h
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

Poisson.o: Poisson.c Poisson.h
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) Poisson Poisson.o
