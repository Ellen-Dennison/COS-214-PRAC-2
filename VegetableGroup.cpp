#include <iostream>
#include "VegetableGroup.h"


std::string VegetableGroup::getName()
{    
   
   std::string rtrn = "Vegetable Pizza\n";
   rtrn += ToppingGroup::getName();
   return rtrn;

}

