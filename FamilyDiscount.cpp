#include <iostream>
#include "DiscountStrategy.cpp"


class FamilyDiscount:public DiscountStrategy
{

  public:
  double applyDiscount();

};

double FamilyDiscount::applyDiscount()
{

}