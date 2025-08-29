#ifndef TOPPING_H
#define TOPPING_H
#include <iostream>
#include "PizzaComponent.h"

class Topping:public PizzaComponent
{  
  private:
  double price;//CHANGES
  std::string name;//CHANGES
  
  public:
  std::string getName();//CHANGES
  double getPrice();//CHANGES

  void setName(std::string Name);//CHANGES
  void setPrice(double price);//CHANGES

};

#endif