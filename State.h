#ifndef STATE_H
#define STATE_H
#include <iostream>
class ToppingGroup; 
class Topping;


class State
{
    public:
    virtual void handle(ToppingGroup* Toppings, Topping* newTopping) = 0;
};

#endif