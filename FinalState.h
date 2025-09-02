#ifndef FINALSTATE_H
#define FINALSTATE_H
#include "State.h"



class FinalState:public State
{
   
    private:
    ToppingGroup* Toppings;
    
    public:
    virtual void handle(ToppingGroup* Toppings, Topping* newTopping) override;
    //~FinalState();
};

#endif