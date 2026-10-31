#include <iostream>


int main(){

#if 0
    std::cout << "It didn't compiled this!" << "\n";
#endif

#if 1
    std::cout << "Compiled" << "\n";
#endif
    return 0;
}