#include <iostream>
#include "DraftState.h"


void DraftState::handle(ToppingGroup* Toppings ,Topping* newTopping)
{
   std::cout << "YOU ARE NOW DRAFTING A NEW ORDER\n";
   Toppings->add(newTopping);
}


