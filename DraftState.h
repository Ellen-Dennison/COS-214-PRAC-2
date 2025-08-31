#ifndef DRAFTSTATE_H
#define DRAFTSTATE_H

#include "State.h"
#include <iostream>

class DraftState:public State
{

    private:
    std::string state;
    
    public:
    std::string getState(std::string state);
   
};

#endif