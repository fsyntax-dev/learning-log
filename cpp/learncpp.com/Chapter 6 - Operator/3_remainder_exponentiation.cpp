#include <iostream>

// % modulus operator - to find operator

int number(){
    int x {};
    std::cout << "Enter an integer: ";
    std::cin >> x;
    return x;
}

int modulus(int x, int y){
    std::cout << "The remainder is: " << x % y << "\n"; 
    return x, y;
}

int main(){

    int x{number()};
    int y{number()};

    modulus(x, y);
    

    

    return 0;
}