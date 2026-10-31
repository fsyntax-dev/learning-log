#include <iostream>

#define PRINT_Alex  //define preprocessor macro

int main(){

#ifdef PRINT_Alex   //check if preprocessor macro defined          

    std::cout << "NameOne" << "\n";

#endif

    return 0;
}