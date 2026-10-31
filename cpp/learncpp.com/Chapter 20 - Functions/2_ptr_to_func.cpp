#include <iostream>
// variable pointer - type* pointer_name
// function pointer - type (*pointer_name)(parameter_list) {&address}

void foo(){
    std::cout << "Foo" << "\n";
}

int main(){

    void (*fooPtr)();   // to make pointer to function 
                        // not holding any address yet

    fooPtr = &foo;      // copy init to assign address                             

    return 0;
}