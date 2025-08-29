#include<iostream>
#include "PizzaDecorator.h"
#include<string>

class StuffedCrust:public PizzaDecorator
{
  
  public:
  double getPrice();
  std::string getName();
  void printPizza();
};