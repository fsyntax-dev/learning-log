#include <iostream>

// function call in try block 
// and the function call throw exception

// try block still detect exception thrown by function call

int manipulate(int x){
    if(x < 0){
        throw "Can' take negative number";
    }
    return x * 2;
}

int main(){

    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    try{
        int y = manipulate(x);
        std::cout << "y is " << y << "\n";
    }

    catch(const char* except){
        std::cerr << "Error: " << except << "\n";
    }

    std::cout << "Program continues as usual" << "\n";

    return 0;
}