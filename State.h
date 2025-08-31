#ifndef STATE_H
#define STATE_H
#include <iostream>

class State
{
    
    public:
    virtual std::string getState(std::string state) = 0;

};

#endif