#ifndef FAMILYDISCOUNT_H
#define FAMILYDISCOUNT_H
#include "DiscountStrategy.h"


class FamilyDiscount:public DiscountStrategy
{

  public:
  double applyDiscount();

};
#endif