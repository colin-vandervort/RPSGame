#pragma once
#include <string>

class I_InputHandler {
    virtual void RequestInput(std::string input) = 0;
};
