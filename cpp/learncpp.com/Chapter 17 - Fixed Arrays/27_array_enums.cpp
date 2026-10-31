#include <iostream>
#include <array>
#include <string_view>

using namespace std::literals::string_view_literals;

namespace Car{
    enum Brand{
        porsche,
        bmw,
        audi,
        nissan,
        toyota,
        max_brand
    };

    constexpr std::array brandName{
                                    "porsche"sv,
                                    "bmw"sv,
                                    "audi"sv,
                                    "nissan"sv,
                                    "toyota"sv,
    };

};

constexpr std::string_view getBrandName(int car){
    return Car::brandName[static_cast<Car::Brand>(car)];    // conversion
}


int main(){

    std::cout << getBrandName(1) << "\n";
}