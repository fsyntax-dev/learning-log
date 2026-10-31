#include <iostream>

void checkValue(int x){

    if (x > 10){
        std:: cout << "Greater" << "\n";
    }
    else if ( x < 10){
        std:: cout << "Least" << "\n";
    }
    else{
        std::cout << "IDK" << "\n";
    }
}

int main(){

    int x{};

    std::cout << "Enter integer: ";
    std::cin >> x;

    checkValue(x);

    return 0;
}