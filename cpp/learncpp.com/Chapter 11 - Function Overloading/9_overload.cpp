#include <iostream>

void print(int x){
    std::cout << x << "\n";
}

void print(double x){
    std::cout << x << "\n";
}

int main(){


                    // when there's no exact match
    print('a');     // compiler will convert (numeric promotion)
    print(true);    // numeric promotion -> match found -> function call


    return 0;
}