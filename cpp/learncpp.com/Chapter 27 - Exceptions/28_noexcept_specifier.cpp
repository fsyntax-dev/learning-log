#include <iostream>
#include <exception>

// noexcept has boolean parameters
//      noexcept(true) - not throwing
//      noexcept(false) - allow throwing

class classA{
public:
    ~classA() {std::cout << "Destructed" << "\n";}
};

void funcA() noexcept(false) {
    throw std::runtime_error{"Error"};
};

int main(){

    try{
        classA varA;
        funcA();    
    }
    catch(const std::exception& exception){
        std::cerr << exception.what() << "\n";
    }

    std::cout << "Show Me" << "\n";


    return 0;
}