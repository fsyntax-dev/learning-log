#include <iostream>

// copy constructor - initialize copy of object of same class
// copy assignment - copy class object to another existing class object

// 

template <typename T>
class Auto_ptr{
private:
    T* m_ptr{};

public:
    Auto_ptr(T* ptr = nullptr) : m_ptr{ptr} {
        std::cout << m_ptr << " allocated" << "\n";
    }
    ~Auto_ptr() {                                       // smart pointer
        std::cout << m_ptr << " deallocated" << "\n";
        delete m_ptr; 
    }                   

    Auto_ptr(const Auto_ptr& ptr){
        m_ptr = new T;
        *m_ptr = *ptr.m_ptr;
        std::cout << m_ptr << " allocated" << "\n";
    }

    Auto_ptr operator=(Auto_ptr& ptr){                            
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

    T& operator*() const {return *m_ptr;}
    T* operator->() const {return m_ptr;}

};


int main(){

    Auto_ptr<int> numOne {new int(10)};
    Auto_ptr numTwo{numOne};



    return 0;
}