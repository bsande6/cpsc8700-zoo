
CC=g++
CFLAGS=-Wall -g


default: zoo.cpp animal.cpp
	$(CC) $(CFLAGS) zoo.cpp animal.cpp -o zoo

run: 
	./zoo < input.txt

clean:
	rm zoo

