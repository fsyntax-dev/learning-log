#include <iostream>
#include <memory>

// shared_ptr   - assign will increase owner of memory
// weak_ptr     - assign will not count of memory owner

class Num{
private:
    int m_x{};

public:
    Num(int x) : m_x{x} {std::cout << "allocated" << "\n";}
    ~Num() {std::cout << "deallocated" << "\n";}    
};

template <typename T>
std::ostream& operator<<(std::ostream& out, std::shared_ptr<T>& ptr){
    out << ptr.get();
    return out;
}


int main(){

    std::shared_ptr<Num> numOne {std::make_shared<Num>(10)};
    std::weak_ptr<Num> numTwo {numOne};

    std::cout << numOne << "\n";

    return 0;
}