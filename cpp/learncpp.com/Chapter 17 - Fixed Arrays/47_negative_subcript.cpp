#include <iostream>

// index c style array can be unsigned and signed - so negative subscript can be done

int main(){

    int array[] {1, 2, 3, 4, 5};

    int* ptr {array};               // array decay

    ptr = &array[3];

    std::cout << ptr[-1] << "\n";   

    return 0;
}