#include <iostream>

// ambiguous match - unclear match - compiler can't decide which function to call

void print(int x){
    std::cout << x << "\n";
}

void print(double x){
    std::cout << x << "\n";
}



int main(){

    print(5L); // 5L is long literal -> ambiguous match


    return 0;
}