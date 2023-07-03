#pragma once
#include "core.h"

namespace Prahna 
{
    class __attribute__((visibility ("default"))) Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };
}
