#ifndef REGULARPRICE_H
#define REGULARPRICE_H
#include "DiscountStrategy.h"

class RegularPrice:public DiscountStrategy
{

  public:
  virtual double applyDiscount() override;

};
#endif
