#include <iostream>

// smart pointer - code in class that manage DMA
//               - ensure the memory get deleted when object is out of scope 

// dumb pointer  - built-in/default pointer bcs they don't clean by itself

template <typename T>
class Num{
private:
    T* m_ptr{};
public:
    Num() = default;
    Num(T* ptr = nullptr) : m_ptr{ptr} {
        std::cout << m_ptr << "\n";
        std::cout << *m_ptr << "\n";
    };
    ~Num() {
        std::cout << m_ptr << " returned" << "\n";
        delete m_ptr;
    
    }
    
    T& operator*() const {return *m_ptr;}
    T* operator->() const {return m_ptr;}

    friend std::ostream& operator<<(std::ostream& out, const Num& num){
        if(num.m_ptr != nullptr){
            out << num.m_ptr;
        }
        else{
            out << nullptr;
        }
        return out;
    }
};

int main(){

    {
        Num ptr{new int(10)};
    }   // ptr out of scope and free memory

    Num ptr_new {new int(20)};

    return 0;
}