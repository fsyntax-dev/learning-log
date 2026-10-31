#include <iostream>

// dangling pointer - pointer that hold address of object that has been destroyed

int main(){

    int x {100};
    int* ptr{&x};

    {
        int y {5};
        int* ptr{&y};
    }

    std::cout << ptr <<"\n";

    return 0;
}