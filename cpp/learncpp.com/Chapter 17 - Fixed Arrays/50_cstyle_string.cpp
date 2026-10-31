#include <iostream>
#include <iterator>

// c style string are still c style array - so it will decay


int main(){

    const char* str[] {"personOne", "personTwo"};

    for(int index {0}; index < std::size(str); ++index){
        std::cout << index << "\t" << str[index] << "\n";  
    }

    return 0;
}