#include<iostream>
#include "PizzaDecorator.h"

double PizzaDecorator::getPrice(){
    if(pizza){
        return pizza.getPrice();
    }
}

std::string PizzaDecorator::getName(){
    if(pizza){
        return pizza.getName();
    }
}

void PizzaDecorator::printPizza(){
    if(pizza){
        return pizza.printPizza();
    }
}
