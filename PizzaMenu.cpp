#include <iostream>
#include "Menus.cpp"
#include "Customer.cpp"
#include "Website.cpp"


class PizzaMenu:public Menus
{
    public:
    void notifyObserver(std::string message);

};