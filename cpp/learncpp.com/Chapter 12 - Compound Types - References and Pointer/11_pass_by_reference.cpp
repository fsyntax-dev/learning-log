#include <iostream>

// pass by reference - access by alias
// another name -> original variable

void printAddress(int x){
    int& ref {x};
    std::cout << "Address of " << x << ": " << &x << "\n";
    std::cout << "Address of reference: " << &ref << "\n";
}

int main(){
    
    int x {5};
    printAddress(x);

    return 0;
}