#include<iostream>
#include "Pizza.h"
#include<string>

class PizzaDecorator:public Pizza
{
  
    private:
    Pizza pizza;

    public:
    virtual double getPrice();
    virtual std::string getName();
    void printPizza();

};

