#include <iostream>

class Pizza
{
  public:
  virtual double getPrice() = 0;
  virtual std::string GetName() = 0;
  void printPizza();

};

void Pizza::printPizza()
{

}
