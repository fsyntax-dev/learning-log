#include <iostream>

// move semantics - move constructor and move assignment operator
//                - to move ownership from object to another object


template <typename T>
class Num{
private:
    T* m_ptr{};

public:
    Num(T* ptr = nullptr) : m_ptr {ptr} {}
    ~Num() {
        delete m_ptr;
    }

    Num(const Num& ptr){                                // Copy Constructor
        m_ptr = new T;
        *m_ptr = *ptr.m_ptr;
    }  

    Num(Num&& ptr) noexcept : m_ptr{ptr.m_ptr} {        // Move Constructor
        ptr.m_ptr = nullptr;
    }

    Num& operator=(const Num& ptr){                     // Copy Assignment
        if(&ptr == nullptr){
            return *this;
        }
        else{
            delete m_ptr;           
            m_ptr = new T;          // allocate new
            *m_ptr = *ptr.m_ptr;    // make copy

            return *this;
        }
    }

    Num& operator=(Num&& ptr) noexcept {                // Move Assignment
        if(&ptr == this){
            return *this;
        }
        else{
            delete m_ptr;           
            m_ptr = ptr.m_ptr;      // transfer ownership     
            ptr.m_ptr = nullptr;    

            return *this;
        }
    }


    Num& operator*() const {return *m_ptr;}
    Num* operator->() const {return m_ptr;}

    friend std::ostream& operator<<(std::ostream& out, const Num& num){
        out << num.m_ptr;
        return out;
    }


};


int main(){

    Num<int> x {new int(10)};

    std::cout << x  << "\n";

    Num<int> y {};
    y = x;

    std::cout << x << "\n";

    return 0;
}