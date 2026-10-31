#include <iostream>
using namespace std;

class Car{
public:
    string model;
    string colour;
    int year;

    void accelerate(){
        cout << "Step on gas" << "\n";
    }

    void brake(){
        cout << "Step on brake" << "\n";
    }
};

int main() 
{
    Car Porsche;

    Porsche.model = "911 GT3 RS";
    Porsche.colour = "Blue";
    Porsche.year = 2025;

    cout << "\n";
    cout << Porsche.model << "\n";
    cout << Porsche.colour << "\n";
    cout << Porsche.year << "\n";

    Porsche.accelerate();

    return 0;
    
}