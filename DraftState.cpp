#include <iostream>
#include "DraftState.h"
#include "ReviewState.h"

std::string DraftState::getState(std::string state)
{
   std::cout << "drafting\n";
   this->state = state;
}

