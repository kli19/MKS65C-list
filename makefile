all: list.o listDemo.o
	gcc list.o listDemo.o

list.o: list.c list.h
	gcc -c list.c

main.o: listDemo.c list.h
	gcc -c listDemo.c

clear:
	rm *.o

run:
	./a.out
