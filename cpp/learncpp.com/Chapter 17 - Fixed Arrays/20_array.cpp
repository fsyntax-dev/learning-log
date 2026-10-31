#include <iostream>
#include <string_view>
#include <string>
#include <array>

struct Item{
    std::string_view name{};
    int gold{};
};

constexpr std::array items{
        Item{"sword" , 5},
        Item{"dagger", 3},
        Item{"club"  , 2},
        Item{"spear" , 7}
};

template <typename T, std::size_t N>
void printArray(const std::array<T, N> array){
    for(const auto& element : array){
            std::cout << "A " << element.name << " costs " << element.gold << " gold." << "\n";
    }
}

int main(){

    printArray(items);


    return 0;
}