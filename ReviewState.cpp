#include <iostream>
#include "ReviewState.h"

std::string ReviewState::getState(std::string state)
{
    
  std::cout << "reviewing\n";
  this->state = state;
  return state;
}