#ifndef MENUS_H
#define MENUS_H

#include <iostream>
#include <vector>
#include "Observer.h"
#include "Pizza.h"

class Menus
{
    private:
    /* 
    Observer* observers;
    Pizza* Pizzas;
    */
    std::vector<Observer*> observers; //CHANGES
    std::vector<Pizza*> pizzas; //CHANGES

    public:
    std::vector<Observer*> getObservers(); //CHANGES
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void addPizza(Pizza* pizza); //CHANGES
    void removePizza(Pizza* pizza);//CHANGES
    virtual void notifyObserver(std::string message) = 0;


};

#endif