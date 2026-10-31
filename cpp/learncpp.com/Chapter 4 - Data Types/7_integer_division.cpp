#include <iostream>

int main(){

    int x{20};
    int y(4);

    std::cout << x/y << "\n"; // result as whole number

    int a{88};
    int b{5};

    std::cout << a/b << "\n"; // decimal will be truncated 
    
    

    return 0;
}