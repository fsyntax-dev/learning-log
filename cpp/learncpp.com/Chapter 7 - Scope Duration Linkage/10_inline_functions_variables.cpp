#include <iostream>

// when we use function - it create performance overhead

// inline   - tells compiler to insert the function code directly
//          - can reduce CPU usage

// inline is a request keywords - request compiler to take the function
//                                code directly


inline int add(int x, int y){
    return x + y;
}

inline void print(int x){
    std::cout << x << "\n";
}

int main(){

    print(add(5,9));
    // whats really happen is
    // std::cout << x + y << "\n";
    // the function directly got replace by the code


    return 0;
}