#include <iostream>

template <typename T>
class Auto_ptr{
public:
    T* m_ptr{};
public:
    Auto_ptr(T* ptr = nullptr) : m_ptr{ptr} {}
    ~Auto_ptr() {delete m_ptr;}
    
    T& operator*() const {return *m_ptr;}
    T* operator->() const {return m_ptr;}
};

class Resource{
public:
    Resource() {std::cout << "Allocated" << "\n";}
    ~Resource() {std::cout << "Deallcated" << "\n";}
    void sayHi() {std::cout << "Hi" << "\n";}
    
};

int main(){

    Auto_ptr<Resource> reso(new Resource());
    reso->sayHi();

    return 0;
}