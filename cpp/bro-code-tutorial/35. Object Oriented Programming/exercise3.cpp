#include <iostream>
#include <list>
using namespace std;

class Car {
public:
    string model;
    int horsepower;
    int topspeed;
    list<string> colours;
};

int main() {
    Car Porsche;

    Porsche.model       = "911 GT3 RS";
    Porsche.horsepower  = 518;
    Porsche.topspeed    = 300;
    Porsche.colours     = {"Blue", "Yellow", "Red"};

    cout << "Model: "       << Porsche.model << "\n";
    cout << "Horsepower: "  << Porsche.horsepower << "\n";
    cout << "Top Speed: "   << Porsche.topspeed << " km/h\n";
    cout << "Colours: "     << "\n";


    int i = 1;

    for (const string& colour : Porsche.colours) {
        cout << i++ << ". "<< colour << "\n";
    }

    return 0;
}
