#include <iostream>
#include <vector>
#include "Observer.h"
#include "Pizza.h"
#include "Menus.h"


/*____________________________________________*/
void Menus::addObserver(Observer* observer)
{ observers.push_back(observer); }

/*____________________________________________*/
void Menus::removeObserver(Observer* observer)
{ 
   if( observers.empty() == 0 )
   {  
     for (auto i = observers.begin(); i != observers.end(); ++i)
     {
        if (*i == observer)
        { observers.erase(i); break; }
     }  
   }  
}

/*____________________________________________*/
std::vector<Observer*> Menus::getObservers()
{ return observers; }


void Menus::addPizza(Pizza* pizza)
{
  
   pizzas.push_back(pizza);
   notifyObserver("PIZZA ADDED TO MENU");

}

void Menus::removePizza(Pizza* pizza)
{
  if( pizzas.empty() == 0 )
   {  
     for (auto i = pizzas.begin(); i != pizzas.end(); ++i)
     {
        if (*i ==pizza) { pizzas.erase(i); break; }
     }  
   } 
 notifyObserver("PIZZA REMOVED TO MENU");
} 
