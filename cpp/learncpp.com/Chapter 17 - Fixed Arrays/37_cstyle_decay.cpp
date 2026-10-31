#include <iostream>

// why array decay exist?

// because when we pass a c style array, we pass by by address not actual value

// solution to ensure C-style arrays of different lengths could be 
// passed to a function without making expensive copies


void getArray(int array[]){         // array always pass by address even the arguments seen as value
    std::cout << array[0] << "\n";
}

int main(){

    int array [500] {5};

    getArray(array);

    return 0;
}