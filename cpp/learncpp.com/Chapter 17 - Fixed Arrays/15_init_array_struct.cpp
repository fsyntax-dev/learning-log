#include <iostream>
#include <array>

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

                                                            // initialize array member without specifying the type
    constexpr std::array<Building, 3> house{
                                                {1, 3, 2},  // compiler thought initialize first array member
                                                {2, 2, 2},
                                                {3, 5, 2}
    };                                                      // compile error                                                      

                                                            // the correct ways to
                                                            // initialize array member without specifying the type
                                                            // add extra {}
    constexpr std::array<Building, 3> apartment{{
                                                    {1, 3, 2},
                                                    {2, 2, 2},
                                                    {3, 5, 2}
                                                }
    };

    printArray(apartment);

    return 0;
}