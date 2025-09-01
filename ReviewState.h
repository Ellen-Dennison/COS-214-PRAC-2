#ifndef REVIEWSTATE_H
#define REVIEWSTATE_H

#include <iostream>
#include "State.h"
#include "ToppingGroup.h"
#include "Topping.h"

class ReviewState:public State
{ 

    private:
    ToppingGroup* Toppings;
    
    public:
    void handle(ToppingGroup* Toppings,Topping* newTopping);
    ~ReviewState();
   
};

#endif