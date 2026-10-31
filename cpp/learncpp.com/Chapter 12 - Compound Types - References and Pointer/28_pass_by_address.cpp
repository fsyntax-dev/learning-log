#include <iostream>

void changeVal(int* ptr){
    *ptr = 6;
}

int main(){

    int x {5};

    std::cout << "x = " << x << "\n";

    changeVal(&x);

    std::cout << "x = " << x << "\n";

    return 0;
}