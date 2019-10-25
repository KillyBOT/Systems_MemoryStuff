all: main.o linkedList.o
	gcc -g -o LinkedList main.o linkedList.o

main.o: main.c linkedList.h
	gcc -c -g main.c

linkedList.o: linkedList.c linkedList.h
	gcc -c -g linkedList.c

run:
	./LinkedList

clean:
	rm *.o
	rm *~
