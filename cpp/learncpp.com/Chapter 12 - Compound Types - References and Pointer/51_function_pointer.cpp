#include <iostream>

// a function that return a pointer

int* divide(int x, int y){
    if(y == 0){
        return nullptr;
    }
    else{
        static int result = x / y;
        return &result;
    }
}

int main(){

    std::cout << divide(5,5) << "\n";

    return 0;
}