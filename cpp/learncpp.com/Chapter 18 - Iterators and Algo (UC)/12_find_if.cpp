#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>

bool containsNut(std::string_view str){
    return str.find("nut") != std::string_view::npos;
}

int main(){

    std::array<std::string_view, 4> array { "apple", "banana", "walnut", "lemon"};

    auto* ptr {std::find_if(array.begin(),array.end(), containsNut)};

    if(ptr == array.end()){
        std::cout << "Not Found" << "\n";
    }
    else{
        std::cout << "Found: " << *ptr << "\n";
    }


    return 0;
}


