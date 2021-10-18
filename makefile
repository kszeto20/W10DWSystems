all: main.o famM.o
	gcc -o output main.o famM.o

contruction.o: main.c famM.h
	gcc -c main.c

famM.o: famM.c
	gcc -c famM.c

run:
	./output

clean:
	rm *.o
	rm output
