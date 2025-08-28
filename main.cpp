#include <iostream>
#include "ToppingGroup.cpp"
#include "Topping.cpp"
#include "PizzaComponent.h"

int main()
{

    /* 
     Cheese 15
     Dough 10
     Tomato Sauce 5
     Pepperoni 20
     Mushrooms 12
     Green Peppers 10
     Onions 8
     Beef Sauage 25
     Feta Cheese 18
     Olives 15
    */

   //!TOPPINGS
   Topping* t1 = new Topping;
   t1->setName("Cheese");
   t1->setPrice(15);

   ToppingGroup* g1 = new ToppingGroup;
   g1->add(t1);

   delete t1;
   delete g1;
}
