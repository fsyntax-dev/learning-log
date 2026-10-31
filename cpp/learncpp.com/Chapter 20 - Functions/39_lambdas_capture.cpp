#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <string_view>

// captureClause or closureCapture - give lambda access to other variable
//                                 - it just like giving context to lambda

// when lambda capture a variable, it create a copy of variable

// since lambda is a functor, when lambda capture the variable 
// the variable become the member variable of that functor

int main(){

    std::array<std::string_view, 5> array {"apple", "banana", "walnut", "lemon", "hazelnut"};

    std::cout << "Search for: ";
    std::string search{};
    std::cin >> search;

    auto found {std::find_if(array.begin(), array.end() , [search] (std::string_view str) {
                return str.find(search) != std::string_view::npos;
            }
        )
    };

    if(found == array.end()){
        std::cout << "Not Found" << "\n";
    }
    else{
        std::cout << "Found: " << *found << "\n";
    }

    return 0;
}