#include "PizzaDecorator.h"

PizzaDecorator::PizzaDecorator(Pizza* pizza){
    this->pizza = pizza;
}

double PizzaDecorator::getPrice(){
        return pizza->getPrice();
}

std::string PizzaDecorator::getName(){
   
        return pizza->getName();
}

void PizzaDecorator::printPizza(){
        return pizza->printPizza();
}

PizzaDecorator::~PizzaDecorator(){
        delete pizza;
        pizza = nullptr;
}
