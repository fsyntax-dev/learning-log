#include <iostream>

// in parameter     -  give value to parameter
// out parameter    -  give empty to parameter and modify it
// in out parameter -  give value to parameter and modify it

void plusNum(int& x){
    x = ++x;
}

int main(){

    int x {10};

    plusNum(x);

    std::cout << x << "\n";


    return 0;
}