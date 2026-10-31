#include <iostream>
using namespace std;

class Car{
public:
    string brand;
    string model;
    string color;
    int year;

    Car(string brand, string model, string color, int year ){
        this->brand = brand;
        this->model = model;
        this->color = color;
        this->year  = year;
    }
    void getInfo(){
        cout << "\n";
        cout << "Brand: "<< brand << "\n";
        cout << "Model: "<< model << "\n";
        cout << "Color: "<< color << "\n";
        cout << "Year: " << year << "\n";
    }

};

int main() 
{
    Car c1("Porsche", "911 GT3 RS", "Blue", 2025);
    Car c2("Porsche", "911 964", "Royal Green", 1991);


    c1.getInfo();
    c2.getInfo();
    
    return 0;
    
}