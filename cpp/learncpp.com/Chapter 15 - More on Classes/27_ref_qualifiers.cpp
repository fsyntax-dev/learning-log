#include <iostream>

// ref qualifier - the member function is overload
//                 to control whether class member function can be called
//                 for lvalue or rvalue object

// &    - on lvalue
// &&   - on rvalue

class Class{
public:
    void hello() & {
        std::cout << "By Lvalue" << "\n";
    }

    void hello() && {
        std::cout << "By Rvalue" << "\n";
    }
};

int main(){

    Class valueA;
    valueA.hello();     // Object Declaration               - Lvalue   

    Class().hello();    //  Temporary Objects Declaration   - Rvalue

    return 0;
}