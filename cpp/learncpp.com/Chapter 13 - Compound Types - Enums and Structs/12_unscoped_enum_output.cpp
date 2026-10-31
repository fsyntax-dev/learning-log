#include <iostream>
#include <string>

// to print enumerator name by using SWITCH CASE

enum Color{
    black,
    blue,
    red,
};

constexpr std::string_view getColorName(Color color){
    switch (color){
        case black  : return "black";
        case blue   : return "blue";
        case red    : return "red";
        default     : return "unknown";
    }
}

int main(){

    constexpr Color shirt{blue};

    std::cout << "Your shirt is " << getColorName(shirt) << "\n";

    return 0;
}