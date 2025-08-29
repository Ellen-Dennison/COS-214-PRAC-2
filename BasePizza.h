#ifndef BASEPIZZA_H
#define BASEPIZZA_H
#include "Pizza.h"
#include "PizzaComponent.h"

class BasePizza:public Pizza
{
  
    private:
    PizzaComponent toppings;

    public:
    double getPrice();
    std::string getName();
    void printPizza();
};
#endif