#ifndef FINALSTATE_H
#define FINALSTATE_H
#include "State.h"
#include "ToppingGroup.h"
#include "Topping.h"


class FinalState:public State
{
   
    private:
    ToppingGroup* Toppings;
    
    public:
    void handle(ToppingGroup* Toppings, Topping* newTopping);
    ~FinalState();
};

#endif