#include <iostream>
#include <vector>
#include "Observer.cpp"
#include "Pizza.cpp"

class Menus
{
    private:
    /* 
    Observer* observers;
    Pizza* Pizzas;
    */
    std::vector<Observer*> observers; //CHANGES
    std::vector<Pizza*> pizzas; //CHANGES

    public:
    std::vector<Observer*> getObservers(); //CHANGES
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void addPizza(Pizza pizza);
    void removePizza(Pizza pizza);
    virtual void notifyObserver(std::string message) = 0;


};

/*____________________________________________*/
void Menus::addObserver(Observer* observer)
{ observers.push_back(observer); }

/*____________________________________________*/
void Menus::removeObserver(Observer* observer)
{ 
   if( observers.empty() == 0 )
   {  
     for (auto i = observers.begin(); i != observers.end(); ++i)
     {
        if (*i == observer)
        { observers.erase(i); break; }
     }  
   }  
}

/*____________________________________________*/
std::vector<Observer*> Menus::getObservers()
{ return observers; }

/* 
void Menus::addPizza(Pizza pizza)
{}

void Menus::removePizza(Pizza pizza)
{} 
*/