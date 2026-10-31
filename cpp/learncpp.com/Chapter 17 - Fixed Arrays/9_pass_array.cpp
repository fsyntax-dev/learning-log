#include <iostream>
#include <array>

// array can be passed to a function
// can pass by value            - expensive copies
// so pass by const reference   - to avoid such copies  



template <typename T, std::size_t N>                    // N should be std::size_t not int
void passbyReference(const std::array<T, N>& array){
    std::cout << array[1] << "\n";
}

int main(){

    constexpr std::array arrayOne{1, 2, 3, 4, 5};       // CTAD deduce as <int, 5>

    passbyReference(arrayOne);

    return 0;
}