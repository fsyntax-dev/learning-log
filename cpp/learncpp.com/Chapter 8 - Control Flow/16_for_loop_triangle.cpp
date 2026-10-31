#include <iostream>

int main(){
    const int row {5};

    for(int i{1}; i <= row; ++i){

        for(int j{1}; j <= i; ++j){
            std::cout << "* ";
        }
        std::cout << "\n";              // newline after an iteration
    }

    return 0;
}