#include <iostream>
#include "FinalState.h"

void FinalState::handle(ToppingGroup* Toppings,Topping* newTopping)
{
    std::cout << "YOU CAN NO LONGER CHANGE YOUR ORDER NOW\n";
    std::cout << Toppings->getName();
    std::cout << Toppings->getPrice();      
   Toppings->getToppings()->clear();
}


