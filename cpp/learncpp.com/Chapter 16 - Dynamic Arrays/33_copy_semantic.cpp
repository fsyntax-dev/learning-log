#include <iostream>
#include <vector>

std::vector<int> makeVector(){
    std::vector array {1, 2, 3, 4, 5};
    return array;                           // return by value
}

int main(){

    std::vector array {makeVector()};       // initialize a temp object
                                            //  temp destroyed after ends of expression
    


    return 0;
}