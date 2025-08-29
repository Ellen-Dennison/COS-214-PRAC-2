#include <iostream>
#include "ToppingGroup.cpp"
#include "MeatGroup.cpp"
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

   Topping* t2 = new Topping;
   t2->setName("Dough");
   t2->setPrice(10);

   Topping* t3 = new Topping;
   t3->setName("Tomato Sauce");
   t3->setPrice(5);
    
   //!OTHER
   ToppingGroup* g1 = new MeatGroup;
   g1->add(t1);
   g1->add(t2);
   g1->add(t3);
   std::cout << g1->getName() << std::endl;
   //std::cout << g1->getPrice() << std::endl;

   delete t1; delete t2; delete t3;
   delete g1;
}
