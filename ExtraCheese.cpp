#include<iostream>
#include "ExtraCheese.h"
#include<string>
using namespace std;

double ExtraCheese::getPrice(){
  return PizzaDecorator::getPrice() + 12.0;
}

string ExtraCheese::getName(){
  std::string result = PizzaDecorator::getName() + " with extra cheese\n";
  return result;
}

void ExtraCheese::printPizza(){
  cout<<"Name: "<<getName()<<endl;
  cout<<"Price: "<<getPrice()<<endl;
}