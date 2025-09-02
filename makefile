main: *.o
	g++ -std=c++11 -o main *.o

*.o: *.cpp
	g++ -c *.cpp

run: main
	./main

valgrind:
	valgrind --leak-check=yes --track-origins=yes ./main

gdb: main
	gdb -ex "break main" -ex "run" ./main

    
clean:
	rm *.o main