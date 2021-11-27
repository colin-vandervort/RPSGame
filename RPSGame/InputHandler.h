#pragma once
#include <string>

class I_InputHandler {
    virtual bool RequestInput(std::string input) = 0;
};
