#include "BulkDiscount.h"

double BulkDiscount::applyDiscount(){
  if(numPizza >= 5){
    return pizza->getPrice()*numPizza*0.9;
  }
  return pizza->getPrice()*numPizza;
}

