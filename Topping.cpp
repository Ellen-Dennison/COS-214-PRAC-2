#include <iostream>
#include "Topping.h"


std::string Topping::getName()
{ return this->name; }

double Topping::getPrice()
{ return this->price; }


void Topping::setName(std::string name)
{ this->name = name; }

void Topping::setPrice(double price)
{ this->price = price; }