#include <iostream>
#include <utility>  // std::swap()

// sorting array    - process arranging arrayy element in particular order
// sorting example  - contact list in alphabetical order, recent to older emails etc

// sorting can make searching become efficient
// why sorting? searching array with many element will be expensive if traverse all of them 

// how sorting works? comparing elements and swap if it meet prediefined criteria

int main(){

    int x{4};
    int y{5};

    // swapping two elements
    std::cout << x << "\t" << y << "\n";

    std::swap(x, y);

    std::cout << x << "\t" << y << "\n";

    return 0;
}