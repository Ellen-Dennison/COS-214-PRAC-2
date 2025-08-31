#include <iostream>
#include "PizzaComponent.h"
#include "ToppingGroup.h"
#include "Topping.h"

void ToppingGroup::add(PizzaComponent* component)
{
  toppings.push_back(component);
}


std::string ToppingGroup::getName()
{    
    std::string rtrn = "Here is your pizza\n";
    for (int i = 0; i < toppings.size(); i++)
    {
      rtrn += toppings[i]->getName();
      if (i != toppings.size()-1)
      { rtrn += ", "; }
    }
    rtrn += "\n";
    return rtrn;
}

double ToppingGroup::getPrice()
{ 
  double rtrn;
  std::cout <<"Here is your total:\n";
  for (int i = 0; i < toppings.size(); i++)
  {
    rtrn += toppings[i]->getPrice();
  }
  return rtrn;
}

std::vector <PizzaComponent*> ToppingGroup::getToppings()
{ return toppings; }