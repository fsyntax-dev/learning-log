#include <iostream>

int main(){
    
    int x {5};
    const int& ref{x};

    // constant reference can be bind to un constant variable

    return 0;
}