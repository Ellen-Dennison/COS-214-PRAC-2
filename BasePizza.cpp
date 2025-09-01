#include <iostream>
#include "Pizza.h"
#include "PizzaComponent.h"
#include "BasePizza.h"
#include<string>
using namespace std;


double BasePizza::getPrice(){
    return toppings->getPrice();
}

string BasePizza::getName(){
    return toppings->getName();
}

void BasePizza::printPizza(){
    cout<<"Name: "<<getName()<<endl;
    cout<<"Price: "<<getPrice()<<endl;
}

void BasePizza::setTopping(PizzaComponent* toppings){
    this->toppings = toppings;
}

