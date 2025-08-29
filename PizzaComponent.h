#include <iostream>
#include<string>

class PizzaComponent
{
  private:
  double price;
  std::string name;

  public:
  virtual std::string getName() = 0;
  virtual double getPrice() = 0;

};