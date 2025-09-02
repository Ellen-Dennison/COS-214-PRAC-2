#include "DiscountStrategy.h"

void DiscountStrategy::setNumPizza(int numPizza){
    this->numPizza = numPizza;
}

void DiscountStrategy::setCurrentPizza(Pizza* p){
    this->currentPizza = p;
}

Pizza* DiscountStrategy::getPizza(){
    return currentPizza;
}