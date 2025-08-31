#ifndef REVIEWSTATE_H
#define REVIEWSTATE_H

#include "State.h"
#include <iostream>

class ReviewState:public State
{ 

    private:
    std::string state;
    
    public:
    std::string getState(std::string state);
   
};

#endif