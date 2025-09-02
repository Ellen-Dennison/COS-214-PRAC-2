#ifndef DISCOUNTSTRATEGY_H
#define DISCOUNTSTRATEGY_H
#include "Pizza.h"
//#include "PizzaOrder.h"

class PizzaOrder;
class DiscountStrategy
{
  protected:
  int numPizza;
  Pizza* currentPizza;
  
  public:
  virtual double applyDiscount() = 0;
  void setNumPizza(int numPizza);
  void setCurrentPizza(Pizza* p);
  Pizza* getPizza();
};

#endif