#include "StuffedCrust.h"
using namespace std;

StuffedCrust::StuffedCrust(Pizza* p) : PizzaDecorator(p){}

double StuffedCrust::getPrice(){
  return PizzaDecorator::getPrice() + 20.0;
}

string StuffedCrust::getName(){
  string result = PizzaDecorator::getName( ) + " with stuffed crust\n";
  return result;
}

void StuffedCrust::printPizza(){
  cout<<"Name: "<<getName()<<endl;
  cout<<"Price: "<<getPrice()<<endl;
}