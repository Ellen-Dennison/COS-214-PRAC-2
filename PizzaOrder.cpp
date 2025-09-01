#include "PizzaOrder.h"

PizzaOrder::PizzaOrder(Pizza* p, DiscountStrategy* strategy) : order(p) {
    this->strategy = strategy;
}

void PizzaOrder::printPizza(){
    order->printPizza();
}

PizzaOrder::~PizzaOrder(){
    std::cout<<"Deleting Pizza order\n";
    delete strategy;
    strategy = nullptr;
    delete order;
    order = nullptr;
}

double PizzaOrder::getPrice(){
    return order->getPrice();
}

std::string PizzaOrder::getName(){
    return order->getName();
}

double PizzaOrder::applyDiscount(){
    return strategy->applyDiscount();
}