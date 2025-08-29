#include<iostream>
#include "StuffedCrust.h"
using namespace std;

double StuffedCrust::getPrice(){
  return PizzaDecorator::getPrice() + 20.0;
}

string StuffedCrust::getName(){
  return PizzaDecorator::getName() + " with stuffed crust"<<endl;
}

void StuffedCrust::printPizza(){
  cout<<"Name: "<<getName()<<endl;
  cout<<"Price: "<<getPrice()<<endl;
}