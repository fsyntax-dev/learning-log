#include <iostream>

// deleting function - tell compiler to not used specific function 
// = delete

void printInt(int x){
    std::cout << x << "\n";
}


int main(){

    printInt(5);
    printInt(true);     // it works but doesn't make sense

    return 0;
}