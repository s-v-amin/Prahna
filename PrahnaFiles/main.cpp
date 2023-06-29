#include <iostream>
#include "output.h"

void init(const string& message)
{
    cout << message << endl;
}
void slowPrint(const string& message)
{
    int size = message.size();

    for(int i = 0; i < size; i++)
    {
        cout << message[i];
        usleep(300000);
        cout.flush();
    }
    cout << endl;
}

int main() 
{
    string message = "Initializing";
    init(message);
    slowPrint("Hello, World!");
    return 0;
}