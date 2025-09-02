#ifndef DRAFTSTATE_H
#define DRAFTSTATE_H

#include <iostream>
#include "State.h"


class DraftState:public State
{

    private:
    ToppingGroup* Toppings;
    
    public:
    virtual void handle(ToppingGroup* Toppings, Topping* newTopping) override;
    //~DraftState();
   
};

#endif