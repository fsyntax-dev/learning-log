#include <iostream>
#include <string>

struct Greet{
    void hi(){
        std::cout << "Hi" << "\n";
    }
    void bye(){
        std::cout << "Bye" << "\n";
    }
    void hi(std::string_view name){
        std::cout << "Hi, " << name << "\n";
    }
    void bye(std::string_view name){
        std::cout << "Bye, " << name << "\n";
    }
};

int main(){

    Greet greet{};

    greet.hi("John");

    return 0;
}