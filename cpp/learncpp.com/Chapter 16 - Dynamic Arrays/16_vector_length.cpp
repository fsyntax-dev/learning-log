#include <iostream>
#include <vector>

// length and size is the same      

// getting the length using std::ssize()        - C++20

int main(){

    std::vector<int> arrayOne {1, 2, 3, 4, 5};

    std::cout << std::ssize(arrayOne) << "\n"; 


    return 0;
}