#include <iostream>

int updateValue(int *x){                    // receive address
    return *x*2;                            // update and dereference
}

int main(){

    int x {5};

    std::cout << updateValue(&x) << "\n";   // pass the address

    return 0;
}