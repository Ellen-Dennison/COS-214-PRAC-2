#ifndef DISCOUNTSTRATEGY_H
#define DISCOUNTSTRATEGY_H
#include "Pizza.h"

class DiscountStrategy
{
  public:
  virtual double applyDiscount() = 0;
};

#endif