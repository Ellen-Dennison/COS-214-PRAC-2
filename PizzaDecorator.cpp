#include<iostream>
#include "PizzaDecorator.h"

double PizzaDecorator::getPrice(){
        return pizza->getPrice();
}

std::string PizzaDecorator::getName(){
   
        return pizza->getName();
}

void PizzaDecorator::printPizza(){
        return pizza->printPizza();
}

void PizzaDecorator::setPizza(Pizza* pizza){
    this->pizza = pizza;
}
