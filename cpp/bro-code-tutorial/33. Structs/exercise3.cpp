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
void paintColor(Car &car, string color);


int main() 
{
    Car car1;
    Car car2;

    car1.brand  = "Porsche";
    car1.model  = "911 GT3 RS";
    car1.year   = 2025;
    car1.color  = "Blue";

    paintColor(car1, "Royal Red");
    printCar(car1);


    return 0;
    
}

void printCar(Car car){

    cout << car.brand << "\n";
    cout << car.model << "\n";
    cout << car.year << "\n";
    cout << car.color << "\n";
    cout << "\n";
}

void paintColor(Car &car, string color){
    car.color = color;
}