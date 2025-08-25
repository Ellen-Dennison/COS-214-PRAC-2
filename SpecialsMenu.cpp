#include <iostream>
#include "Menus.cpp"
#include "Customer.cpp"
#include "Website.cpp"

class SpecialsMenu:public Menus
{
    public:
    void notifyObserver(std::string message);

};