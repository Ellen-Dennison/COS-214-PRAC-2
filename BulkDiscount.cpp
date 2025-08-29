#include "BulkDiscount.h"

double BulkDiscount::applyDiscount(){
  if(numPizza >= 5){
    return pizza->getPrice()*0.9*numPizza;
  }
  return pizza->getPrice()*numPizza;
}