#include <iostream>

// bffr syntx for pointer to function is ugly, so use type alias

using compareData = bool(*)(int x, int y);

void validateOne (bool (*funcPtr)(int, int )){  // ugly
    // code
};

void validateTwo (compareData){                 // better
    // code
}

int main(){

    return 0;
}