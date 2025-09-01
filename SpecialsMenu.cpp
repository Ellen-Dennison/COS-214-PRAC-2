#include <iostream>
#include "Menus.cpp"
#include "Customer.h"
#include "Website.h"
#include "SpecialsMenu.h"


void SpecialsMenu::notifyObserver(std::string message)
{
  std::vector<Observer*> observers = this->getObservers();
  for (int i = 0; i < observers.size(); i++) 
  { observers[i]->update(message); }
  
}