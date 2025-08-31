#include <iostream>
#include "Observer.h"
#include "Customer.h"


void Customer::update(std::string message)
{ std::cout << "CUSTOMER THERE HAS BEEN A CHANGE: " << message << std::endl; }