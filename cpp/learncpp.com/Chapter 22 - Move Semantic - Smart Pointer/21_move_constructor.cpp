#include <iostream>

template <typename T>
class Num{
private:
    T* m_ptr{};

public:
    Num(T* ptr = nullptr) : m_ptr{ptr} {}
    ~Num() {delete m_ptr;}
    
    Num(const Num& ptr) {
        m_ptr = new T;
        *m_ptr = ptr.m_ptr;
    }

    Num(Num&& ptr) noexcept : m_ptr{ptr.m_ptr}{
        ptr.m_ptr = nullptr;
    }

    Num& operator=(const Num& ptr){
        if(&ptr == this){
            return *this;
        }
        else{
            delete m_ptr;
            m_ptr = new T;
            *m_ptr = ptr.m_ptr;

            return *this;
        }
    }

    Num& operator=(Num&& ptr){
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

    friend std::ostream& operator<<(std::ostream& out, const Num& num){
        out << num.m_ptr;
        return out;
    }

};

int main(){

    Num<int> x {new int(10)};

    std::cout << x << "\n";



    return 0;
}