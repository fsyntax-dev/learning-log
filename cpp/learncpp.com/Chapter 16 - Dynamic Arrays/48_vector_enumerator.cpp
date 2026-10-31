#include <iostream>
#include <vector>

// count enumerator - special enum add at the end of the list
//                  - to count how many item in enum

namespace Family{
    enum Name{
        peter,      // 0
        lois,       // 1
        meg,        // 2
        chris,      // 3
        stewie,     // 4
        brian,      // 5
        max_family  // 6
    };
}

int main(){

    std::vector<int> weight(Family::max_family);


    return 0;
}