#ifndef PIZZAMENU_H
#define PIZZAMENU_H
#include "Menus.h"


class PizzaMenu:public Menus
{
    public:
    void notifyObserver(std::string message);//CHANGES

};

#endif