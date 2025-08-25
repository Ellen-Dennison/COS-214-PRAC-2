#include <iostream>
#include "Observer.cpp"


class Website:public Observer
{
  public:
  void update(std::string message);
};

void Website::update(std::string message)
{ std::cout << message << std::endl; }