#include <iostream>
#include <array>
#include <algorithm>
#include <string_view>

struct Student{
    std::string_view name{};
    int points{};
};

int main(){

    std::array<Student, 8> array {{
                                        {"Albert"   , 3},
                                        {"Ben"      , 5},
                                        {"Christine", 2},
                                        {"Dan"      , 8},
                                        {"Enchilada", 4},
                                        {"Francis"  , 3},
                                        {"Greg"     , 3},
                                        {"Hagrid"   , 5},

        }
    };


    const auto best {
        std::max_element(array.begin(), array.end(), [](const auto& x, const auto& y) {
            return x.points < y.points;

            }
        ) 
    };

    std::cout << best->name << "\n";

    return 0;
}