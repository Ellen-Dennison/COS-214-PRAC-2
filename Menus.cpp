#include <iostream>
#include "Observer.cpp"
#include "Pizza.cpp"

class Menus
{
    private:
    Observer* observers;
    Pizza* Pizzas;

    public:
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void addPizza(Pizza pizza);
    void removePizza(Pizza pizza);
    virtual void notifyObserver(std::string message) = 0;


};