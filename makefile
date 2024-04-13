all: main

main: main.o testing.o random.o
	gcc -o main main.o testing.o random.o

main.o: main.c
	gcc -c main.c

testing.o: testing.c testing.h
	gcc -c testing.c

random.o: random.c random.h
	gcc -c random.c

clean:
	rm main.o testing.o random.o
