#include <iostream>
#include <memory>

// make_unique and make_shared function that allocated memory for smart pointer
// make_unique for unique_ptr - no copy
// make_shared for shared_ptr - can copy

// unique_ptr - single owner
// shared_ptr - multiple owner

class Num{
private:
    int m_x{};

public:
    Num(int x) : m_x{x} {std::cout << "allocated" << "\n";}
    ~Num() {std::cout << "deallocated" << "\n";}    

    friend std::ostream& operator<<(std::ostream& out, const Num& num){
        out << num.m_x;
        return out;
    }

};

template <typename T>
void printPtr(std::shared_ptr<T>& ptr){
    static int counter{};
    ++counter;
    std::cout << counter << ": " << *ptr << "\n";
    std::cout << counter << ": " << ptr.get() << "\n";
    std::cout << "\n"; 

}

template <typename T>
void countPtr(std::shared_ptr<T>& ptr){
    std::cout << ptr.get() << " used " << ptr.use_count() << " times" << "\n";    
}

int main(){

    std::shared_ptr<Num> numOne {std::make_shared<Num>(10)};
    std::shared_ptr<Num> numTwo {numOne};
    std::shared_ptr<Num> numThree {numOne};

    printPtr(numOne);
    printPtr(numTwo);
    printPtr(numThree);



    return 0;
}