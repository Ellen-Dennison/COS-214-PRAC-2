#ifndef DRAFTSTATE_H
#define DRAFTSTATE_H

#include <iostream>
#include "State.h"


class DraftState:public State
{

    private:
    ToppingGroup* Toppings;
    
    public:
    void handle(ToppingGroup* Toppings, Topping* newTopping);
    ~DraftState();
   
};

#endif