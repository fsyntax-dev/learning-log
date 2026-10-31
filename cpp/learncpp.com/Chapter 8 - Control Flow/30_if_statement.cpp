#include <iostream>

int main(){

    int x{};

    for(x = 0; x < 10; ++x){
        std::cout << x + 1 << "\t";
        std::cout << x << "\n";
    }


    return 0;
}