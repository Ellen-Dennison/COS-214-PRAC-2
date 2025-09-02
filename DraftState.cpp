#include <iostream>
#include "DraftState.h"
#include "ToppingGroup.h"
#include "Topping.h"

void DraftState::handle(ToppingGroup* Toppings ,Topping* newTopping)
{
   std::cout << "YOU ARE NOW DRAFTING A NEW ORDER\n";
   Toppings->add(newTopping);
}


