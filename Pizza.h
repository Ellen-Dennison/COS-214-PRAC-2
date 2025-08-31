#ifndef PIZZA_H
#define PIZZA_H
#include <iostream>

class Pizza
{
    public:
    virtual double getPrice();
    virtual std::string getName();
    void printPizza();

};


#endif