#include <iostream>
#include "DiscountStrategy.cpp"


class BulkDiscount:public DiscountStrategy
{

  public:
  double applyDiscount();

};

double BulkDiscount::applyDiscount()
{

}