#include <iostream>
#include "Pizza.cpp"
#include "PizzaComponent.cpp"


class BasePizza:public Pizza
{
  
    private:
    PizzaComponent toppings;

    public:
    double getPrice();
    std::string getName();


};

