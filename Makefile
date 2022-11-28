CC = gcc
AR=ar
FLAGS = -Wall -fPIC -g

all: connections mats
my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

mats: libmy_mat.a

libmy_mat.a: my_mat.o my_mat.o
	$(AR) -rcs  libmy_mat.a my_mat.o my_mat.o

connections: main.o libmy_mat.a
	$(CC) $(FLAGS) -o connections main.o  libmy_mat.a 

clean:
	rm -f libmy_mat.a connections mats main *.o


.PHONY: clean all mats main