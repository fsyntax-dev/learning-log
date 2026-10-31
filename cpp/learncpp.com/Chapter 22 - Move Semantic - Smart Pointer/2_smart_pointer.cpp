#include <iostream>

template <typename T>
class Num{
private:
    T* m_ptr{};

public:
    Num() = default;
    Num(T* ptr = nullptr) : m_ptr{ptr} {}
    ~Num() {
        std::cout << m_ptr << " returned" << "\n";
        delete m_ptr;
    }
    
    T& operator*() const {return *m_ptr;}
    T* operator->() const {return m_ptr;}

    void setNum(int x) {*m_ptr = x;}
    
    friend std::ostream& operator<<(std::ostream& out, const Num& num){
        out << num.m_ptr;
        return out;
    }

    Num& operator=(const Num& num){
        m_ptr = num.m_ptr;

        return *this;
    }
    
};

int main(){

    Num x {new int(10)};
    x.setNum(11);

    std::cout << *x << "\n";

    return 0;
}