#include <iostream>
#include <vector>

// indexing with enums

// enum return an int
// operator[] can implicitly convert int to std::size_t

namespace Family{
    enum Name{
        peter,      // 0
        lois,       // 1
        meg,        // 2
        chris,      // 3
        stewie,     // 4
        brian       // 5
    };
}

int main(){

    std::vector<int> weight{140, 59, 62, 105, 13, 25};

    std::cout << weight[Family::lois] << "\n";          // index array with scope resolution operator to enum

    weight[Family::Name::lois] = 60;                    // update array element

    std::cout << weight[Family::lois] << "\n"; 

    return 0;
}