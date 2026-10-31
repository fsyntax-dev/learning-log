#include <iostream>
#include <string>

namespace print{
    void print(int x){
        std::cout << x << "\n";
    }
    void print(double x){
        std::cout << x << "\n";
    }
    void print(std::string x){
        std::cout << x << "\n";
    }
}



int main(){

    print::print(5);
    print::print(10.4);
    print::print("Hello World");

    return 0;
}