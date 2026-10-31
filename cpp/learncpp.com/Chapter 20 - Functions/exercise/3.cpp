#include <iostream>

int main(){

    int x {5};
    double y {5.5};

    void* xPtr {&x};
    void* yPtr {&y};

    return 0;
}