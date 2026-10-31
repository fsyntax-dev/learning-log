#include <iostream>
using namespace std;
/*
Overloaded Cnstructors 
    + Multiple constructor with same name but different parameters

*/

class Pizza{
public:
    string topping1;
    string topping2;
    
    Pizza(string topping1){
        this->topping1 = topping1;
    }

    Pizza(string topping1, string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }
};




int main() 
{
    Pizza pizza1("Peperoni");
    Pizza pizza2("Mushroom", "Peppers");

    cout << pizza1.topping1 << "\n";
    cout << "\n";
    cout << pizza2.topping1 << "\n";
    cout << pizza2.topping2 << "\n";

    return 0;
    
}