#include <iostream>
#include <vector>

// std::vector - dynamic array / resizable array
//             - size can be change after instantiation

// .resize - member function for new length

int main(){

    // initialize array
    std::vector<int> array (5);
    std::cout << array.size() << "\n";


    // resize array
    array.resize(10);
    std::cout << array.size() << "\n";


    return 0;
}