.POSIX:
.SUFFIXES:

CC      = cc
CFLAGS  = -Wall -pedantic
LDFLAGS = -s

all: batt

batt: batt.o
	$(CC) $(LDFLAGS) batt.o -o batt

.SUFFIXES: .c .o
.c.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o batt
