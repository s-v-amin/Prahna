#pragma once
#define PR_PLATFORM_MAC

#ifdef PR_PLATFORM_MAC

extern Prahna::Application* Prahna::CreateApplication();

int main(int argc, char** argv)
{ 
    
    auto app = Prahna::CreateApplication();
    app->Run();
    delete app;
}

#endif
