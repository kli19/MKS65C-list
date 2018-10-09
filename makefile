all : list.o listDemo.o
	gcc list.o listDemo.o
run : 
	./a.out
clean: 
	rm *.o
list.o: list.c list.h
	gcc -c list.c
listDemo.o: listDemo.c list.h
	gcc -c listDemo.c
