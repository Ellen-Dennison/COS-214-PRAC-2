#include <iostream>

class Pizza
{
    public:
    virtual double getPrice() = 0;
    virtual std::string getName() = 0;
    void printPizza();

};
