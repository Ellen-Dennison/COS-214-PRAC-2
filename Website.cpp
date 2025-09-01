#include <iostream>
#include "Observer.h"
#include "Website.h"


void Website::update(std::string message)
{ std::cout << "WEBSITE USER THERE HAS BEEN A CHANGE: " << message << std::endl; }