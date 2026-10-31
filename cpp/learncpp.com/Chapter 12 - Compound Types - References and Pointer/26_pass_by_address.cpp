#include <iostream>

void takeMyAddress(int* ptr){       // pass by address
    std::cout << *ptr << "\n";      // dereference - to show the actual value
}

int main(){

    int x{15};
    int *ptr{&x};

    takeMyAddress(ptr);
    takeMyAddress(&x);

    return 0;
}