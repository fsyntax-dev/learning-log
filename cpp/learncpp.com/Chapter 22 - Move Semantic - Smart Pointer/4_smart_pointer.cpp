#include <iostream>

// constructor - allocate memory
// destructor  - deallocate memory

template <typename T>
class Num{
private:
    T* m_ptr{};

public:
    Num() = default;
    Num(T* ptr = nullptr) : m_ptr{ptr} {
        std::cout << m_ptr << " allocated" << "\n";
    }
    ~Num() {
        std::cout << m_ptr << " deallocated" << "\n";
        delete m_ptr;
    }
    
    friend std::ostream& operator<<(std::ostream& out, const Num& num){
        out << num.m_ptr;
        return out;
    }

    T& operator*() const {return *m_ptr;}
    T& operator->() const {return m_ptr;}


};

int main(){

    Num x {new int(10)};



    return 0;
}