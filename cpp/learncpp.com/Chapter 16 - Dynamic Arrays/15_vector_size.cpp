#include <iostream>
#include <vector>

// .size()      - member function of class std::vector, std::string, std::string_view 
// std::size()  - non member function


int main(){

    std::vector<int> valueA{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << "Length: " << valueA.size() << " elements" << "\n";
    std::cout << "Length: " << std::size(valueA) << " elements" << "\n";


    return 0;
}