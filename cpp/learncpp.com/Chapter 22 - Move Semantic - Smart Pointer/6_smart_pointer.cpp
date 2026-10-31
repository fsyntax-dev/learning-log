#include <iostream>

template <typename T>
class Auto_ptr{
private:
    T* m_ptr{};

public:
    Auto_ptr(T* ptr = nullptr) : m_ptr{ptr} {}

    ~Auto_ptr() { delete m_ptr;}
    
    T& operator*() const {return *m_ptr;}
    T* operator->() const {return m_ptr;}

    friend std::ostream& operator<<(std::ostream& out, const Auto_ptr ptr){
        out << ptr.m_ptr;
        return out;
    }

};

class Resource{
public:
    Resource() {std::cout << "Allocated" << "\n";}
    ~Resource() {std::cout << "Deallocated" << "\n";}

};

int main(){

    Auto_ptr<Resource> reso(new Resource());
    Auto_ptr<Resource> another_reso{reso};          // shallow copy - implicit constructor by compiler

    std::cout << reso << "\n";
    std::cout << another_reso << "\n";

    return 0;
}   // 1 memory shared with 2 object
    // 1 memory got deleted
    // and 1 memory tryna get delete again? -> can cause undefined behaviour