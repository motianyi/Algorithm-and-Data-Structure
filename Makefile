CC=gcc
CFLAGS=-I.
DEPS = main.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: main.o selectionSort.o insertionSort.o
	$(CC) -o main main.o selectionSort.o insertionSort.o

selectionSort.o: selectionSort.c
	$(CC) -c selectionSort.c

insertionSort.o: insertionSort.c
	$(CC) -c insertionSort.c
