#include <iostream>

template <typename T>
class Num{
private:
    T* m_ptr{};

public:
    Num(T* ptr = nullptr) : m_ptr{ptr} {
        std::cout << "Constructor" << "\n";
    }
    ~Num() {                                        
        std::cout << "Destructor" << "\n";              
        delete m_ptr;            
    }

    Num(const Num& ptr){
        std::cout << "Copy Constructor" << "\n";
        m_ptr = new T;                          
        *m_ptr = *ptr.m_ptr;
    }

    Num(Num&& ptr) noexcept 
        : m_ptr {ptr.m_ptr} {
        std::cout << "Move Constructor" << "\n";        
        ptr.m_ptr = nullptr;    
    }
    
    Num& operator=(const Num& ptr){
        std::cout << "Copy Assignment" << "\n";
        if(&ptr == this){
            return *this;
        }
        else{
            delete m_ptr;
            m_ptr = new T;
            *m_ptr = *ptr.m_ptr;

            return *this;
        }
    }

    Num& operator=(Num&& ptr) noexcept {
        std::cout << "Move Assignment" << "\n";
        if(&ptr == this){
            return *this;
        }
        else{
            delete m_ptr;
            m_ptr = ptr.m_ptr;
            ptr.m_ptr = nullptr;

            return *this;
        }
    }

    T& operator*() const {return *m_ptr;}
    T* operator->() const {return m_ptr;}
    bool isNull() const {return m_ptr == nullptr;}

};

int main(){

    Num<int> x {new int(10)};
    Num<int> y {x};
    Num<int> z {};
    z = y;


    return 0;
}