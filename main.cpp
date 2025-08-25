#include <iostream>
#include "PizzaMenu.cpp"
#include "Website.cpp"

int main()
{
  
  Observer* ob1=  new Website;
  Observer* ob2 = new Website;
  

  PizzaMenu p1;
  p1.addObserver(ob1);
  p1.addObserver(ob2);

  //p1.notifyObserver("Website test 1", ob1);
  //p1.notifyObserver("Website test 2", ob2);
  

}