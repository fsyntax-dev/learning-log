#include <iostream>
#include <vector>

namespace Animal{
    enum Species{
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
        max_number
    };

    std::vector<int> legs{2, 4, 4, 4, 2, 0, 0};
}


int main(){

    std::cout << "Chicken has " << Animal::legs[Animal::Species::chicken] << " legs"<<"\n";
    

    return 0;
}