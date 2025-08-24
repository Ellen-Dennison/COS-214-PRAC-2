#include <iostream>
#include "PizzaComponenet.cpp"

class ToppingGroup:public PizzaComponent
{
   private:
   PizzaComponent* toppings;

   public:
   void add(PizzaComponent component);
   virtual std::string getName();
   virtual double getPrice();

};


/*
void ToppingGroup::add(PizzaComponent component)
{
  giving me an error it won't let me have this PizzaComponent component) as a parameter
}
*/
std::string ToppingGroup::getName()
{}

double ToppingGroup::getPrice()
{}
