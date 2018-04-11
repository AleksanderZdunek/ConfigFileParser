CC = gcc
CXX = g++
CFLAGS = -std=gnu89 -Wall -O3
CXXFLAGS = -std=c++11 -Wall -O3

all: main main_c
.PHONY: all

main: main.cpp animal.o
	$(CXX) $(CXXFLAGS) -o $@ $^

main_c: main.c animal.o
	$(CC) $(CFLAGS) -o $@ $^ -lstdc++

animal.o: animal.cpp animal.h
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -vf main main_c *.o
