#include "RegularPrice.h"

double RegularPrice::applyDiscount(){
  return getPizza()->getPrice()*numPizza*1.0;
}