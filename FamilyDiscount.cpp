#include "FamilyDiscount.h"

double FamilyDiscount::applyDiscount(){
  return pizza->getPrice()*0.85*numPIzza;
}