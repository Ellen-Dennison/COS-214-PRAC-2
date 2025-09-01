#include <iostream>
#include "Menus.h"
#include "Customer.h"
#include "Website.h"
#include "PizzaMenu.h"


void PizzaMenu::notifyObserver(std::string message)
{
   std::vector<Observer*> observers = this->getObservers();
   for (int i = 0; i < observers.size(); i++) 
   { observers[i]->update(message); }
   
}