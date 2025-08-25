#include <iostream>
#include "DiscountStrategy.cpp"


class RegularPrice:public DiscountStrategy
{

  public:
  double applyDiscount();

};

double RegularPrice::applyDiscount()
{

}