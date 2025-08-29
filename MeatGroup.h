#ifndef MEATGROUP_H
#define MEATGROUP_H
#include <iostream>
#include "ToppingGroup.h"


class MeatGroup:public ToppingGroup
{
    
    public:
    virtual std::string getName();//CHANGES

    
};

#endif