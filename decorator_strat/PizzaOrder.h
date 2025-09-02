#ifndef PIZZAORDER_H
#define PIZZAORDER_H
#include "DiscountStrategy.h"

class PizzaOrder{
    private: 
            Pizza *order;
            DiscountStrategy *strategy;
            
    public: 
           
            PizzaOrder(Pizza* order, DiscountStrategy* strategy, int numPizza);
            void printPizza();
            double getPrice();
            std::string getName();
            double applyDiscount();
            ~PizzaOrder();
            Pizza* getPizza();
};

#endif