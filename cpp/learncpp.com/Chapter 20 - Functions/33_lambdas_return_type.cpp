#include <iostream>

// return type is optional
// if used auto - return type also auto

/*
    [captureClause] (parameter) -> returnType {
        statements;
    }
*/

int main(){

    int x {5};

    auto divide { 
        [x] (double y) -> double {
                                return y / x;
        }
    };

    std::cout << divide(19) << "\n";



    return 0;
}