#include <iostream>
#include <vector>

std::vector<int> generate(){
    std::vector array {1, 2, 3, 4 ,5};
    return array;
}

int main(){

    std::vector array{generate()};      // intialize using temp object from function


    std::cout << array[3] << "\n";

    array[3] = 5;

    std::cout << array[3] << "\n";


    return 0;
}