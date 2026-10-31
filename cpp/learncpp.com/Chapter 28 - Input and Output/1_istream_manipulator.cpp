#include <iostream>
#include <iomanip>
#include <iterator>

// stream - pipeline that move data from a to b
//        - cin - keyboard -> cin -> program
//        - cout - program -> cout -> screen

// manipulator - an object to modify a stream
// setw - use to limit the number of character read from a stream
//      - it just like a bouncer at a club

int main(){

/*
    char buffer[10]{};
    std::cin >> buffer;
*/

    char buffer[10]{};
    std::cin >> std::setw(std::size(buffer)) >> buffer;

    for(int i {0}; i < std::size(buffer) ; ++i){
        std::cout << buffer[i] << " ";
    }

    
    return 0;
}