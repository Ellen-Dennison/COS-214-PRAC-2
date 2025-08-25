#include <iostream>

class Observer
{
    public:
    virtual void update(std::string message) = 0;
};