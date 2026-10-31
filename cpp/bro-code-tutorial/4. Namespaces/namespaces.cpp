/*
Namespace = solution to prevent name conflict
Namespace = allow indeticall name entities 
            as long as the namespace are different
*/
#include <iostream>

namespace first{ 
    int x = 1; 
}

namespace second{ 
    int x = 2; 
}

int main(){

    int x = 0;
    
    std::cout << x << std::endl;
    std::cout << first::x << std::endl;
    std::cout << second::x << "\n";

    // std::cout << namespace variable:: variable declare in namespace << "\n"

    return 0;
}