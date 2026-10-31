#include <iostream>

// capture clause - give access to lambda to access variable outside its scope
//                - give context to lambda
//                - capture used copy, can use & for reference
//                - [&variable_name]

int main(){

    int x {10};
    
    auto add = [x](int y){              // by copy
        return x + y;
    };

    std::cout << add(7) << "\n";

    auto subtract = [&x](int y){        // by reference
        return x - y;
    };

    std::cout << subtract(7) << "\n";


    return 0;
}