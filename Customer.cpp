#include <iostream>
#include "Observer.cpp"


class Customer:public Observer
{
  public:
  void update(std::string message);
};

void Customer::update(std::string message)
{ std::cout << message << std::endl; }