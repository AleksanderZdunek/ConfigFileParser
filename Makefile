test.exe: main.cpp ConfigFileParser.o
	g++ -std=c++11 -Wall -O3 -o test.exe main.cpp ConfigFileParser.o

ConfigFileParser.o: ConfigFileParser.cpp ConfigFileParser.h
	g++ -std=c++11 -Wall -O3 -c -o ConfigFileParser.o ConfigFileParser.cpp

clean:
	rm -vf test.exe *.o
