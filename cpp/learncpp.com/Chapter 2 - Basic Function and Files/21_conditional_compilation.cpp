#include <iostream>
//conditional compilation - allow complier to compile or not based on conditions

#define Alex

int main(){

#ifdef Alex     //define Alex

    std::cout << "Hi, Alex" << "\n";
    std::cout << "This line will print" << "\n";

#endif

#ifdef Smith  //never define Smith

    std::cout << "Hi, Smith" << "\n";
    std::cout << "This line will not print" << "\n";

#endif

    return 0;
}