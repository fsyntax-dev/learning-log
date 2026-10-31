#include <iostream>

// to call function via function pointer
//      explicit dereference     - (*function_ptr)(argument)
//      impliciti dereference    - function_ptr(argument)

int foo(int x){
    return x;
}

int main(){

    // function pointer
    int (*fcnPtrOne) (int) {foo};

    // explicit dereference
    std::cout << (*fcnPtrOne)(5) << "\n";

    // implicit dereference
    std::cout << fcnPtrOne(10) << "\n";

    return 0;
}