#include <iostream>

// copy semantics - copy constructor and assgiment operator 
//                  copy the pointer 

// move semantics - transfer ownership of pointer from source to destination object
//                - implement as copy constructor
//                - class transfer wnership of object rather making a copy

// non const copy constructor and assignment operator

template <typename T>
class Auto_ptr{
private:
    T* m_ptr{};

public:
    Auto_ptr(T* ptr = nullptr) : m_ptr(ptr) {}
    ~Auto_ptr() {delete m_ptr;}

    // copy constructor implements move semantic
    Auto_ptr(Auto_ptr& ptr){        // non const

        m_ptr = ptr.m_ptr;          // transfer dumb ptr from source to local object
        ptr.m_ptr = nullptr;        // make sure the source no longer own pointer
    }


    // assignment operator implements move semantic
    Auto_ptr& operator=(Auto_ptr& ptr){

        if(&ptr == this){           // self check
            return *this;
        }
        else{
            delete m_ptr;           // deallocate any pointer 
            m_ptr = ptr.m_ptr;      // transfer dumb pointer from source to local object
            ptr.m_ptr = nullptr;    // make sure the source no longer own pointer
            return *this;
        }
    }

    T& operator*() const {return *m_ptr;}
    T* operator->() const {return m_ptr;}
    

};

int main(){


    return 0;
}