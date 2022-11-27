CC = gcc
AR=ar
FLAGS = -Wall -fPIC -g

all: connections mats
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

mats: libmat.a

libmat.a: my_mat.o my_mat.o
	$(AR) -rcs  libmat.a my_mat.o my_mat.o

connections: main.o libmat.a
	$(CC) $(FLAGS) -o connections main.o  libmat.a -lm

clean:
	rm -f libmat.a connections mats main *.o


.PHONY: clean all mats main