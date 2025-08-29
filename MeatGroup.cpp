#include <iostream>
#include "MeatGroup.h"

std::string MeatGroup::getName()
{    
   std::string rtrn = "Meat Pizza:";
   rtrn += ToppingGroup::getName();
   return rtrn;
}

double MeatGroup::getPrice()
{ 
  return 0.0;
}
