#include <iostream>
#include <memory>

// std::make_unique<object_type>(arguments)

// object type  - the type
// arguments    - arguments for the type

// it return unique_ptr

// it a preferred way to create std::unique_ptr object
// rather than new operator


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

    friend std::ostream& operator<<(std::ostream& out, const std::unique_ptr<Num>& ptr){
        out << *ptr;
        return out;
    }
};

int main(){

    std::unique_ptr<Num> num {std::make_unique<Num>(10)};

    // std::unique_ptr<Num> isn't num object itself
    // it a smart pointer object that own Num
    // stored on the heap


    std::cout << num << "\n";



    return 0;
}