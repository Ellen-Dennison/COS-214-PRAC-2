#include <iostream>
#include "PizzaDecorator.h"
#include<string>

class ExtraCheese:public PizzaDecorator
{
  
  public:
  ExtraCheese(Pizza* p);
  double getPrice();
  std::string getName();
  void printPizza();
};