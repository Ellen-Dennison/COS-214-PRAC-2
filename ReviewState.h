#ifndef REVIEWSTATE_H
#define REVIEWSTATE_H

#include <iostream>
#include "State.h"


class ReviewState:public State
{ 

    private:
    ToppingGroup* Toppings;
    
    public:
    virtual void handle(ToppingGroup* Toppings,Topping* newTopping) override;
    //~ReviewState();
   
};

#endif