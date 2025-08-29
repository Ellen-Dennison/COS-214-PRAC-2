#ifndef VEGETABLEGROUP_H
#define VEGETABLEGROUP_H
#include <iostream>
#include "ToppingGroup.h"

class VegetableGroup:public ToppingGroup
{

   public:
   virtual std::string getName();//CHANGES
   virtual double getPrice();//CHANGES

};


#endif