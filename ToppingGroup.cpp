#include <iostream>
#include "PizzaComponent.h"
#include "ToppingGroup.h"
#include "Topping.h"

#include "BasePizza.cpp"
#include "DraftState.cpp"
#include "ReviewState.cpp"
#include "FinalState.cpp"



void ToppingGroup::add(PizzaComponent* component)
{
  
  toppings.push_back(component);
}

void ToppingGroup::drafting()
{  
  if(newState != nullptr)
  { delete newState; }
  newState = new DraftState;


}

void ToppingGroup::reviewing()
{  
  if(newState != nullptr)
  { delete newState; }

  newState = new ReviewState;
}

void ToppingGroup::final()
{  
  if(newState != nullptr)
  { delete newState; }

  newState = new FinalState;
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


ToppingGroup::~ToppingGroup()
{
  if(newState != nullptr)
  { delete newState; }

}