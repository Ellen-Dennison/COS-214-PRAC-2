#ifndef PIZZAORDER_H
#define PIZZAORDER_H
#include "DiscountStrategy.h"

class PizzaOrder{
    private:
            int numPizza;
            Pizza *pizza;
            DiscountStrategy *strategy;
    public:
            double applyDiscount();
};

#endif