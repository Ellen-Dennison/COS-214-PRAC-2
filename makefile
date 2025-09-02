main: *.o
	g++ -std=c++11 -o main *.o

*.o: TestingMain.cpp Topping.cpp ToppingGroup.cpp Menus.cpp Website.cpp Customer.cpp DraftState.cpp ReviewState.cpp FinalState.cpp VegetableGroup.cpp MeatGroup.cpp PizzaMenu.cpp
	g++ -c TestingMain.cpp Topping.cpp ToppingGroup.cpp Menus.cpp Website.cpp Customer.cpp DraftState.cpp ReviewState.cpp FinalState.cpp VegetableGroup.cpp MeatGroup.cpp PizzaMenu.cpp

run: main
	./main

valgrind:
	valgrind --leak-check=yes --track-origins=yes ./main

gdb: main
	gdb -ex "break main" -ex "run" ./main

    
clean:
	rm *.o main