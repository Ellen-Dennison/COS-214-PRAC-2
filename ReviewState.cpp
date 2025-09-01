#include <iostream>
#include "ReviewState.h"


void ReviewState::handle(ToppingGroup* Toppings ,Topping* newTopping)
{
  std::cout << "YOU ARE NOW REVIEWING YOUR ORDER\n";
  std::cout << Toppings->getName();

}

