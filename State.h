#ifndef STATE_H
#define STATE_H
#include <iostream>

class State
{
    
    public:
    virtual void ChangeState(std::string state) = 0;

};

#endif