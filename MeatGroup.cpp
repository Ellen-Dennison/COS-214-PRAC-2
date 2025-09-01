#include <iostream>
#include "MeatGroup.h"
#include "ToppingGroup.h"

std::string MeatGroup::getName()
{    
   std::string rtrn = "Meat Pizza\n";
   rtrn += ToppingGroup::getName();
   return rtrn;
}

