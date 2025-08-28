#ifndef WEBSITE_H
#define WEBSITE_H

#include <iostream>
#include "Observer.h"
class Website:public Observer
{
  public:
  void update(std::string message);
};

#endif