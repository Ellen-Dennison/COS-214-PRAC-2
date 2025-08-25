main: *.o
	g++ -std=c++11 -o main *.o

*.o: main.cpp
	g++ -c main.cpp

run: main
	./main
    
clean:
	rm *.o main