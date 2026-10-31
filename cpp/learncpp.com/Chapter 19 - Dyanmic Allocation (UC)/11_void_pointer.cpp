#include <iostream>
 
// void pointer / generic pointer - special type of pointer that pointed at any type object

int numX {5};
double numY {5.55};

int main(){

    void* ptr {};

    ptr = &numX;
    ptr = &numY;

    // since void ptr pointer to other type - dereferencing a void pointer is illegal
    // need to cast it first

    double* doublePtr {static_cast<double*>(ptr)};

    std::cout << *doublePtr << "\n";

    return 0;
}