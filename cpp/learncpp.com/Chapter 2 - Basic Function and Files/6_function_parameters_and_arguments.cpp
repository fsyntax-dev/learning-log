#include <iostream>

//Pass information to function when being called
//Parameters - when defined function
//Arguements - when we called the function

int addNumber(int x, int y){

    int sum{x + y};
    std::cout << sum << "\n";
    return sum;
}

void printNumber(int x, int y){

    std::cout << x << "\n";
    std::cout << y << "\n";
}


int main(){

    addNumber(5, 5);

    printNumber(20,30);

    return 0;
}