#include<iostream>
#include "ExtraCheese.h"
using namespace std;

double ExtraCheese::getPrice(){
  return PizzaDecorator::getPrice() + 2.0;
}

string ExtraCheese::getName(){
  return PizzaDecorator::getName() + " with extra cheese"<<endl;
}

void ExtraCheese::printPizza(){
  cout<<"Name: "<<getName()<<endl;
  cout<<"Price: "<<getPrice()<<endl;
}