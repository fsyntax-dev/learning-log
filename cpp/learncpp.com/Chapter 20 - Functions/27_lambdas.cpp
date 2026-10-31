#include <iostream>

// lambda or closure - anonymous function inside another function

/*

    [captureClause] (paramters) -> returnType {
        statements;
    }

*/

int main(){

    auto string = []() {
        std::cout << "Hello World" << "\n";
    };

    string();

    return 0;
}