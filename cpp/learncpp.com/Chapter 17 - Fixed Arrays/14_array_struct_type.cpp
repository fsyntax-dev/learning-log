#include <iostream>
#include <array>

// std::array can be any object of fundamental types and compound types

struct Building{
    int number{};
    int rooms{};
    int toilets{};
};

template <typename T, std::size_t N>
void printArray(const std::array<T, N>& array){
    for(const auto& element : array){
        std::cout << "Number: " << element.number << "\n";
        std::cout << "Rooms : " << element.rooms << "\n";
        std::cout << "Toilet: " << element.toilets << "\n";
        std::cout << "----------" << "\n";
    }
}


int main(){

    std::array<Building, 3> house{};

    house[0] = {1, 3, 2};
    house[1] = {2, 5, 3};
    house[2] = {3, 2, 1};
    
    printArray(house);

    std::cout << "\n";

    constexpr std::array apartment{                     // CTAD - deduces <Building, 3>
                                    // initializing explicitly specifying element type
                                    Building{1 ,2, 2},  // index 0
                                    Building{2 ,3, 2},  // index 1
                                    Building{3 ,2, 1}   // index 2
    };

    printArray(apartment);

    std::cout << "\n";

    constexpr std::array<Building, 3> bungalow{                     // telling each element should be Building
                                                Building {1, 3, 2}, // type compound "Building" should be mention here
                                                Building {2, 2, 2},
                                                Building {3, 5, 2}
    };
                                                                    /*
                                                                    why should mention again the type if it already mention?
                                                                    bcs need to follow the array definition
                                                                    
                                                                    template<typename T, std::size_t N>
                                                                    struct array
                                                                    {
                                                                        T implementation_defined_name[N];
                                                                    };

                                                                    */

    return 0;
}