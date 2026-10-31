#include <iostream>
using namespace std;

struct Car{
    string brand;
    string model;
    int horsepower;
    int year;
};

int main() 
{
    Car c1;

    c1.brand = "Porsche";
    c1.model = "911 GT3 RS";
    c1.horsepower = 518;
    c1.year = 2025;

    cout << "Brand: " << c1.brand << "\n";
    cout << "Model: " << c1.model << "\n";
    cout << "Horsepower: " << c1.horsepower << " HP\n";
    cout << "Year: " << c1.year << "\n";

    return 0;
    
}