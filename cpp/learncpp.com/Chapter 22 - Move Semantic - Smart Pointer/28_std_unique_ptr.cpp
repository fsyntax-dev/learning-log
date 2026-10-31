#include <iostream>
#include <memory>
#include <utility>

// pass std::unique_ptr to function
// function take the ownership from class
// it ends after the function get called

class Num{
private:
    int m_x{};

public:
    Num(int x) : m_x{x} {
        std::cout << "allocated" << "\n";
    }
    ~Num() {
        std::cout << "deallocated" << "\n";
    }
    
    friend std::ostream& operator<<(std::ostream& out, const Num& num){
        out << num.m_x;
        return out;
    }    

};

void takeOwnership(std::unique_ptr<Num> num){
    if(num){
        std::cout << *num << "\n";
    }
}

int main(){

    auto ptr {std::make_unique<Num>(10)};

    takeOwnership(std::move(ptr));          // deallocated here

    std::cout << "bruh" << "\n";

    return 0;
}