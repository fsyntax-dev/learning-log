#include <iostream>

int main(){

    int x {40};
    int& ref {x};           // alias to x // reference to x

    auto anotherRef {ref};  // deduce as int not reference 
                            // create a copy of x


    return 0;
}