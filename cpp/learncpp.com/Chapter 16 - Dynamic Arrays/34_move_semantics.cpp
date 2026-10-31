#include <iostream>
#include <vector>

// std::move - transfer ownership

std::vector<int> makeVector(){
    std::vector array {1, 2, 3, 4, 5};
    return array;                           // return by value
}

int main(){

    std::vector array {std::move(makeVector())};
                                           

    return 0;
}