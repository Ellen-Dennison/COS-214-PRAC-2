#ifndef SPECIALSMENU_H
#define SPECIALSMENU_H
#include "Menus.h"

class SpecialsMenu:public Menus
{
    public:
    void notifyObserver(std::string message) override;

};


#endif