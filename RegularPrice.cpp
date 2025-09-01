#include "RegularPrice.h"

double RegularPrice::applyDiscount(){
  return pizza->getPrice()*numPizza*1.0;
}