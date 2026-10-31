#include <iostream>
/*
Return 
    + Return a value back to the spot where ou called the encompassing function.
*/

double square(double len);


int main() 
{

    double len = 5.0;
    double area = square(len);

    std::cout << "Area: " << area << " cm2" << "\n";

    return 0;
    
}

double square (double len){
    double result = len * len;
    return result;
}