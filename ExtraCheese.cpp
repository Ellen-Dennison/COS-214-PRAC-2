#include <iostream>
#include "PizzaDecorator.cpp"

class ExtraCheese:public PizzaDecorator
{
  
  public:
  double getPrice();
  std::string getName();

};