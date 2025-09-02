#include "FamilyDiscount.h"

double FamilyDiscount::applyDiscount(){
  return getPizza()->getPrice()*numPizza*0.85;
}