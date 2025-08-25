#include <iostream>
#include "Observer.cpp"

class Customer:public Observer
{
  public:
  void update(std::string message);
};