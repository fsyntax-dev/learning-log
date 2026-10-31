#include <iostream>
using namespace std;
// Pass struct to a function as arguement

struct Car{
    string brand;
    string model;
    int year;
    string color;
};

void printCar(Car car);

int main() 
{
    Car car1;
    Car car2;

    car1.brand  = "Porsche";
    car1.model  = "911 GT3 RS";
    car1.year   = 2025;
    car1.color  = "Blue";

    car2.brand  = "Porsche";
    car2.model  = "911 964";
    car2.year   = 1994;
    car2.color  = "Royal Green";
    
    cout << &car1 << "\n";  //pass by refrence - original copy
    printCar(car1);
    printCar(car2);

    return 0;
    
}

void printCar(Car car){
    cout << &car << "\n"; // pass by value - create copy
    cout << car.brand << "\n";
    cout << car.model << "\n";
    cout << car.year << "\n";
    cout << car.color << "\n";
    cout << "\n";
}
