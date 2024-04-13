all: main

main: main.o testing.o
	gcc -o main main.o testing.o

main.o: main.c
	gcc -c main.c

testing.o: testing.c
	gcc -c testing.c

clean:
	rm main.o testing.o
