#ifndef TOPPINGGROUP_H
#define TOPPINGGROUP_H
#include <iostream>
#include <vector>
#include "PizzaComponent.h"
#include "Topping.h"
#include "State.h"

class ToppingGroup:public PizzaComponent
{
   private:
   std::vector <PizzaComponent*> toppings;//CHANGES
   double price;//CHANGES
   std::string name;//CHANGES
   State* newState;//CHANGES

   public:
   void add(PizzaComponent* component);//CHANGES
   std::vector <PizzaComponent*>* getToppings();//CHANGES
   virtual std::string getName();//CHANGES
   virtual double getPrice();//CHANGES

   void setState(State* newState);//CHANGES
   void handle(Topping* newTopping);//CHANGES
   ~ToppingGroup();//CHANGES

};
#endif


