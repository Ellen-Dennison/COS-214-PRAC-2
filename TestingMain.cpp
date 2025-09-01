#include "PizzaComponent.h"
#include "BasePizza.h"
#include "ExtraCheese.h"
#include "Pizza.h"
#include "PizzaDecorator.h"
#include "StuffedCrust.h"
#include<iostream>
#include<string>

int main(){
    //Testing the decorator part of the system
    Pizza pizza1 = new BasePizza();
    pizza1.print();
    
    return 0;
}