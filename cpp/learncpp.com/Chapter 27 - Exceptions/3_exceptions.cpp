#include <iostream>

int main(){

    try{
        // throw exception of type double
        throw 4.5; 
        std::cout << "This statement will not print" << "\n";
    }
        // handle exception of type double
    catch(double){
        std::cerr << "Double error caught" << "\n";
    }


    return 0;
}