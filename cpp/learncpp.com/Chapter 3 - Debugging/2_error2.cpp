#include <iostream>

// error in c++ has two type 
//      1. syntax errors    - didn't follow c++ grammar
//      2. semantic errors  - didn't follow logic

int main(){

    int length  {5};
    int width   {3};

    int area {length + area};   // semantic error
                                // should be * not +

    std::cout << area << "\n";


    return 0;
}