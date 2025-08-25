#include <iostream>
#include "Observer.cpp"

class Website:public Observer
{
  public:
  void update(std::string message);
};