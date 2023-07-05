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

Prahna::Application* Prahna::CreateApplication()
{
    return new Sandbox();
}
