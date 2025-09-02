#include "PizzaOrder.h"

PizzaOrder::PizzaOrder(Pizza* p, DiscountStrategy* strategy, int numPizza) : order(p) {
    this->strategy = strategy;
    this->strategy->setNumPizza(numPizza);
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

Pizza* PizzaOrder::getPizza(){
    return order;
}

double PizzaOrder::getPrice(){
    return order->getPrice();
}

std::string PizzaOrder::getName(){
    return order->getName();
}

double PizzaOrder::applyDiscount(){
    strategy->setCurrentPizza(order);
    return strategy->applyDiscount();
}