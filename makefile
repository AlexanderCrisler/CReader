all: build run clean

build:
	g++ main.c -o main.o

run:
	./main.o

clean:
	rm main.o
