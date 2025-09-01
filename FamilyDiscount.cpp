#include "FamilyDiscount.h"

double FamilyDiscount::applyDiscount(){
  return pizza->getPrice()*numPizza*0.85;
}