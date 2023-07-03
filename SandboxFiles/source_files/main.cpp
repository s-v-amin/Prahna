#include <iostream>
#include "../../PrahnaFiles/header_files/output.h"

int main() 
{
    std::string message = "Initializing";
    output::init(message);
    output::print("Hello, Sahil!");
    return 0;
}

