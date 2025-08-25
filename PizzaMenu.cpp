#include <iostream>
#include "Menus.cpp"
#include "Customer.cpp"
#include "Website.cpp"


class PizzaMenu:public Menus
{
    public:
    void notifyObserver(std::string message);//CHANGES

};

void PizzaMenu::notifyObserver(std::string message)
{
   std::vector<Observer*> observers; 
   
}