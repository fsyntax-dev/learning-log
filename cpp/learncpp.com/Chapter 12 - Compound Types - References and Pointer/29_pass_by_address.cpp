#include <iostream>

void print(int* ptr){
    std::cout << *ptr << "\n";
}

int main(){

    int x {5};
    print(&x);

    int* ptr{};
    print(ptr);


    return 0;
}