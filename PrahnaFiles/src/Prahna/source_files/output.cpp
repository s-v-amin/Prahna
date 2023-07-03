#include "../header_files/output.h"
#include <iostream>

void output::init(const std::string& message)
{
    std::cout << message << std::endl;
}
void output::print(const std::string& message)
{
    int size = message.size();

    for(int i = 0; i < size; i++)
    {
        std::cout << message[i];
        usleep(300000);
        std::cout.flush();
    }
   std::cout << std::endl;
}