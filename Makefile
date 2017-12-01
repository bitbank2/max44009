CFLAGS=-c -Wall -O2
LIBS = -lm -lpthread

all: libmax44009.a

libmax44009.a: max44009.o
	ar -rc libmax44009.a max44009.o ;\
	sudo cp libmax44009.a /usr/local/lib ;\
	sudo cp max44009.h /usr/local/include

max44009.o: max44009.c
	$(CC) $(CFLAGS) max44009.c

clean:
	rm *.o libmax44009.a
