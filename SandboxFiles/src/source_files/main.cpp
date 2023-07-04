#include <iostream>
#include "../../../PrahnaFiles/src/Prahna/header_files/output.h"

int main() 
{
    std::string message = "Initializing";
    output::init(message);
    output::print("Hello, Sahil!");
    return 0;
}

