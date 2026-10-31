#include <iostream>
#include <string_view>
#include <array>

using namespace std::string_view_literals;

namespace Color{
    enum Type{
        black,
        red,
        blue,
        max_color
    };

    constexpr std::array colorName {
                                    "black"sv,
                                    "red"sv,
                                    "blue"sv,
                                };


};

constexpr std::string_view getColorName(Color::Type color){
    return Color::colorName[color];
}

std::ostream& operator<<(std::ostream& out, Color::Type color){
    return out << getColorName(color);
}

int main(){
    for (int i = 0; i < Color::max_color; ++i){
        std::cout << static_cast<Color::Type>(i) << "\n";
    }

    return 0;
}