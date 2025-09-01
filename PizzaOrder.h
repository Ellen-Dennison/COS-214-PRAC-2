#ifndef PIZZAORDER_H
#define PIZZAORDER_H
#include "DiscountStrategy.h"

class PizzaOrder{
    private:
            Pizza *pizza;
            DiscountStrategy *strategy;
    public:
            PizzaOrder(Pizza* p, DiscountStrategy* strategy);
            void printPizza();
            double getPrice();
            std::string getName();
            double applyDiscount();
            ~PizzaOrder();
};

#endif