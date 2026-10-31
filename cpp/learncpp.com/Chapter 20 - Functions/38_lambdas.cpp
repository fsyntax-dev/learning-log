#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>

struct Season{
    std::string_view seasonName{};
    double averageTemp{};
};

int main(){

    std::array<Season, 4> season {{
                                    {"Spring", 285.0},
                                    {"Summer", 296.0},
                                    {"Fall"  , 288.0},
                                    {"Winter", 263.0}
        }
    };

    std::sort(season.begin(), season.end(), 
                [] (const auto& x, const auto& y) {
                    return x.averageTemp < y.averageTemp;
                }
    );

    for(const auto& element : season){
        std::cout << element.seasonName << "\n";
    }

    return 0;
}