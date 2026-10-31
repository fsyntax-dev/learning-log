#include <iostream>
#include <memory>

// std::shared_ptr - multiple smart pointer own one memory
//                 - keep track how many it shared - use_count()
//                 - object will not deallocated even individual shared_ptr got destroyed
//                 - the last shared_ptr out of scope the resource will deallocated



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

    std::shared_ptr<Num> numOne {new Num(10)};
    std::shared_ptr<Num> numTwo {numOne};

    printPtr(numOne);
    printPtr(numTwo);

    {
        std::shared_ptr<Num> numThree {numOne};
        printPtr(numThree);
        countPtr(numOne);
    } // numThree out of scope

    countPtr(numOne);

    return 0;
}