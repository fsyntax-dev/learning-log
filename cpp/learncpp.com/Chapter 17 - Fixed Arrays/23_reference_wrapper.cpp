#include <iostream>
#include <array>
#include <functional>

int main(){

    int x {1};
    int y {2};
    int z {3};

    // std::array<type&, array_length> array_name {}            // not gonna work &type
    std::array<std::reference_wrapper<int>, 3> array {x, y, z}; // std::reference_wrapper<int> will implicitly
                                                                // convert to std::reference_wrapper<int&>

    array[1].get() = 10;

    for(auto& element : array){
        std::cout << element << "\n";
    }


    return 0;
}