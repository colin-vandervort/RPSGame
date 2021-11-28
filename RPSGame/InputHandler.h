#pragma once
#include <string>

class I_InputHandler {
    virtual int RequestInput(std::string input) = 0;
};
