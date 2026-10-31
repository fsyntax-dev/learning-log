#include <iostream>

// before this we make copy and move semantic in class together - just for comparison
// can disable copy to make class exlcusive with move semantic

template <typename T>
class Num{
private:
    T* m_ptr{};

public:
    Num(T* ptr = nullptr) : m_ptr{ptr} {}
    ~Num() {delete m_ptr;}
    
    Num(const Num& ptr) = delete;

    Num(Num&& ptr) noexcept : m_ptr{ptr.m_ptr} {
        ptr.m_ptr = nullptr;
    }

    Num& operator=(const Num& ptr) = delete;

    Num& operator=(Num&& ptr) noexcept {
        if(&ptr == this){
            return *this;
        }
        else{
            delete  m_ptr;
            m_ptr = ptr.m_ptr;
            ptr.m_ptr = nullptr;

            return *this;
        }
    }

    T& operator*() const {return *m_ptr;}
    T* operator->() const {return m_ptr;}

    friend std::ostream& operator<<(std::ostream& out, const Num& num){
        out << num.m_ptr;
        return out;
    }
};


int main(){


    Num<int> x {new int(10)};

    Num<int> y {x};             // not working cause we delete copy semantic
    

    return 0;
}