#include <iostream>

// if you give default arguement, the rest must be default also
void printInt(int x = 10, int y = 20){
    std::cout << x << "\t";
    std::cout << y << "\t";
}

int main(){

    printInt();

    return 0;
}