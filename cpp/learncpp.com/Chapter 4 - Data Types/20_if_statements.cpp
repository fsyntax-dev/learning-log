#include <iostream>

void checkZero(int x){

    if (x > 0){
        std::cout << "The value is positive" << "\n";
    }

    else if ( x < 0){
        std::cout << "The value is negative" << "\n";
    }

    else{
        std::cout << "The value is zero" << "\n";
    }
}

int main(){

    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;

    checkZero(x);

    return 0;
}