#include "BulkDiscount.h"

double BulkDiscount::applyDiscount(){
  return getPizza()->getPrice()*numPizza*0.9;
}

