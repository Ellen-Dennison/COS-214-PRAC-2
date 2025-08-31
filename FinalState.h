#ifndef FINALSTATE_H
#define FINALSTATE_H
#include "State.h"
#include <iostream>

class FinalState:public State
{
   
    private:
    std::string state;
    
    public:
    void ChangeState(std::string state);
};

#endif