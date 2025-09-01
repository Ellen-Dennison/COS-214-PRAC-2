#ifndef DISCOUNTSTRATEGY_H
#define DISCOUNTSTRATEGY_H
#include "Pizza.h"

class DiscountStrategy
{
  private:
          int numPizza;
          Pizza *pizza;
  public:
          virtual double applyDiscount() = 0;
};

#endif