#include <iostream>
#include <array>
#include <functional>   // std::reference_wrapper


// importance thing to note about std::reference_wrapper
//      operator = will reseated 
//      std::reference_wrapper<T> will implicitly convert to T&
//      .get() member function can be use to get T&

int main(){

    int x {1};
    int y {2};
    int z {3};

    std::array<std::reference_wrapper<int>, 3> array {x, y, z};

    std::cout << array[1] << "\n";

    array[1].get() = 5;

    std::cout << array[1] << "\n";
    
    return 0;
}