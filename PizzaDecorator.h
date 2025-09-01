#ifndef PIZZADECORATOR_H
#define PIZZADECORATOR_H
#include "Pizza.h"
#include<string>

class PizzaDecorator:public Pizza
{
  
    private:
    Pizza *pizza;

    public:
    PizzaDecorator(Pizza* p);
    virtual double getPrice();
    virtual std::string getName();
    ~PizzaDecorator();
    void printPizza();

};

#endif