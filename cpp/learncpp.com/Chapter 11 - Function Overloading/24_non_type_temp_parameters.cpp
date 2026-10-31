#include <iostream>

template<int N>             // declare a non-type template paramter f type int N
void print(){
    std::cout << N << "\n"; // use value of N
}

int main(){

    print<10>();            // 10 is non-type template arguement

    return 0;
}