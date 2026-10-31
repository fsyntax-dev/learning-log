#include <iostream>

int add(int x, int y){
    return x + y;
}

int subtract(int x, int y){
    return x - y;
}

int main(){

    // to store function pointer
    int (*fcnPtrAdd)(int, int ) {&add};             // with & operator
    int (*fcnPtrSub)(int, int ) {subtract};         // without () operator

    std::cout << &add << "\n";                      // operator << doesn't know how to print function address directly
    std::cout << subtract << "\n";                  // it will convert to bool value 
                                                    // return 1 since it not a null ptr

    std::cout << fcnPtrAdd(5, 6) << "\n";



    return 0;
}