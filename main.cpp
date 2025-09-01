#include <iostream>
#include "ToppingGroup.cpp"
#include "MeatGroup.cpp"
#include "VegetableGroup.cpp"
#include "Topping.cpp"
#include "PizzaComponent.h"
#include "BasePizza.cpp"
#include "PizzaDecorator.cpp"
#include "ExtraCheese.cpp"
#include "DraftState.cpp"
#include "ReviewState.cpp"
#include "FinalState.cpp"
#include "PizzaMenu.cpp"
#include "Website.cpp"
#include "Customer.cpp"
#include "Menus.cpp"
#include "Pizza.h"
#include "StuffedCrust.cpp"
#include "PizzaOrder.cpp"



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
   t3->setName("Green Peppers");
   t3->setPrice(10);

   Topping* t4 = new Topping;
   t4->setName("Beef Sauage");
   t4->setPrice(5);
    
   //!OTHER VEGGIE PIZZA
   ToppingGroup* g1 = new VegetableGroup;
   g1->add(t1);
   g1->add(t2);
   g1->add(t3);
   std::cout << g1->getName();
   std::cout << g1->getPrice() << std::endl;
   

   
   std::cout << "\n-----------------STATE TEST-----------------\n";
   
   //!STATE TEST
   State* newState = new DraftState;
   ToppingGroup* g3 = new VegetableGroup;
   g3->setState(newState);
   g3->handle(t1);
   g3->handle(t2);
   g3->handle(t3);
   std::cout << g3->getName();
   
   std::cout << "\n----------------------------------\n";
   g3->setState(new ReviewState);
   g3->handle(t1);

   std::cout << "\n----------------------------------\n";

   g3->setState(new FinalState);
   g3->handle(t1);
    
   std::cout << "\n----------------------------------\n";
   g3->setState(newState);
   g3->add(t1);
   std::cout << g3->getName();


   //!OTHER MEAT PIZZA
   ToppingGroup* g2 = new MeatGroup;
   g2->add(t1);
   g2->add(t2);
   g2->add(t4);
   //std::cout << g2->getName();
   //std::cout << g2->getPrice() << std::endl;
   std::cout << "----------------------------------\n";
   

   delete t1; delete t2; delete t3; delete t4;
   delete g1; delete g2; //delete bp1; delete ds1;
   delete newState; //delete g3;

    Observer* ob1=  new Website;
    Observer* ob2 = new Customer;
  

    Menus* p1 = new PizzaMenu;
    p1->addObserver(ob1);
    p1->addObserver(ob2);
    
    Pizza* pineapple;
    p1->addPizza(pineapple);

    //p1->notifyObserver("Website test 1");
    //p1->notifyObserver("Website test 2"); 

    delete ob1;
    delete ob2;
    delete p1;
    //delete pineapple;
 

    //Testing Decorator functions
    ToppingGroup* tg= new VegetableGroup;
    tg->add(t1);
    tg->add(t2);
    tg->add(t3);

    BasePizza *base = new BasePizza;//base pizza has toppings
   base->setTopping(tg);
   
   PizzaOrder *order1 = new PizzaOrder(new ExtraCheese(new StuffedCrust(base)), new Regular price);
   std::cout<<"Price of Decorated Pizza: "<<order1->getPrice()<<endl;
   std::cout<<"Name of Decorated Pizza: "<<order1->getName()<<endl;
   std::cout<<"printing pizza: "<<endl;

   order1->printPizza();
   std::cout<<"-----------------------------------------------------------------------------------------\n";

   
   //Testing the Strategy design pattern
   double priceA = order1->applyDiscount();

   PizzaOrder *order2 = new PizzaOrder(new ExtraCheese(base), BulkDiscount);
   double orderPrice = order2->getPrice()*3;
   double priceB = orderPrice->
   std::cout<<"Prices after discount has been applied:/n";
   std::cout<<"-----------------------------------------------------------------------------------------------\n";
   std::cout<<"After regular price discount: "<<priceA<<std::endl;
   std::cout<<"After bulk discount: "<<priceB<<std::endl;
   std::cout<<"After family discount: "<<priceC<<std::endl;
   
   delete order1;
   delete orders;
   delete tg; delete base;

  delete t1; delete t2; delete t3; delete t4;
   delete g1; delete g2;



  return 0;


  
}
