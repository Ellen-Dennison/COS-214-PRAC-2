#ifndef TOPPINGGROUP_H
#define TOPPINGGROUP_H
#include <iostream>
#include <vector>
#include "PizzaComponent.h"

class ToppingGroup:public PizzaComponent
{
   private:
   std::vector <PizzaComponent*> toppings;//CHANGES
   double price;//CHANGES
   std::string name;//CHANGES

   public:
   void add(PizzaComponent* component);//CHANGES
   std::vector <PizzaComponent*> getToppings();//CHANGES
   virtual std::string getName();//CHANGES
   virtual double getPrice();//CHANGES

};
#endif


