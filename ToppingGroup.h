#ifndef TOPPINGGROUP_H
#define TOPPINGGROUP_H
#include <iostream>
#include "PizzaComponent.h"

class ToppingGroup:public PizzaComponent
{
   private:
   PizzaComponent* toppings;
   double price;//CHANGES
   std::string name;//CHANGES

   public:
   void add(PizzaComponent* component);//CHANGES
   virtual std::string getName();
   virtual double getPrice();

};
#endif


