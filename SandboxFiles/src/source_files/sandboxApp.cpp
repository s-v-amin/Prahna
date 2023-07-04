//#include <Prahna.h>
#include "../../../PrahnaFiles/src/Prahna.h"
#include <iostream>

class Sandbox : public Prahna::Application 
{
    public:
        Sandbox()
        {

        }

        ~Sandbox()
        {

        }
};

int main()
{
    Sandbox* sandbox = new Sandbox();
    std::cout << "Hello, World!" << std::endl;
    sandbox->Run();
    delete sandbox;
    return 0;
}
