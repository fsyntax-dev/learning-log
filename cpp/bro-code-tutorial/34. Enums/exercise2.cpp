#include <iostream>
using namespace std;

// enum is used to define enumeration

enum trafficLight{Red = 0, Yellow = 1, Green = 2};

int main() 
{
    trafficLight color = Red;

    switch(color){
        case Red:
            cout << "Stop" << "\n";
            break;
        case Yellow:
            cout << "Consider to Stop" << "\n";
        case Green:
            cout << "Go" << "\n";
    }

    return 0;
    
}