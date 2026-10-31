#include <iostream>

// comma operator   - evaluate mutiple expression in single statement
//                  - return value of last expression
//                  - (expression1, expression2) return expression 2

// comma seperator  - int name(int x, inty){return x + y}
int main(){

    int x{ 1 };
    int y{ 2 };

    std::cout << (++x, ++y) << "\n";

    return 0;
}