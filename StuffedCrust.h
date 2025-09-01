#include<iostream>
#include "PizzaDecorator.h"
#include<string>

class StuffedCrust:public PizzaDecorator
{
  
  public:
  StuffedCrust(Pizza* p);
  double getPrice();
  std::string getName();
  void printPizza();
};