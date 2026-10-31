#include <iostream>



int main(){

    int x {5};
    int* ptr {&x};
    int*& refptr{ptr};

    std::cout << ptr << "\n";
    std::cout << refptr << "\n";

    return 0;
}