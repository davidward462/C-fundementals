all: main

main: main.o testing.o random.o array.o
	gcc -o main main.o testing.o random.o array.o

main.o: main.c
	gcc -c main.c

testing.o: testing.c testing.h array.h
	gcc -c testing.c

random.o: random.c random.h
	gcc -c random.c

array.o: array.c array.h
	gcc -c array.c

clean:
	rm main.o testing.o random.o array.o
