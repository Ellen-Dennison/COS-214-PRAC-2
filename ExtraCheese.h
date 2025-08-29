#include <iostream>
#include "PizzaDecorator.h"
#include<string>

class ExtraCheese:public PizzaDecorator
{
  
  public:
  double getPrice();
  std::string getName();
  void printPizza();
};