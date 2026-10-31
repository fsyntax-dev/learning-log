#include <iostream>

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

std::ostream& operator<<(std::ostream& out, Color color){
    out << getColorName(color);
    return out;
}

int main(){

    Color shirt {blue};
    std::cout << "Shirt color is " << shirt << "\n";

    return 0;
}