#include <iostream>
#include "PizzaDecorator.cpp"

class StuffedCrust:public PizzaDecorator
{
  
  public:
  double getPrice();
  std::string getName();

};