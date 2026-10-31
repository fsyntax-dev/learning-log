#include <iostream>

// move constructoor - constructor that transfer/move value of object to another object without copy
//                   - steals the rvalue from object to another

//                   - to manage heap
//                   - copy is expensive moving is cheap

// ClassName(ClassName&& value) noexcept; - parameters accepts rvalue reference
//                                        - noexcept - compiler wont throw

template <typename T>
class Num{
private:
    T* m_ptr{};
public:
    Num() = default;
    Num(T* ptr = nullptr) : m_ptr{ptr} {}
    ~Num() { delete m_ptr; }

    Num(const Num& ptr) {
        m_ptr = new T;
        *m_ptr = *ptr.m_ptr;
    }

    Num(Num&& ptr) noexcept {
        m_ptr = ptr.m_ptr;
        ptr.m_ptr = nullptr;
    }

    friend std::ostream& operator<<(std::ostream& out, const Num& num){
        out << num.m_ptr;
        return out;
    }

    T& operator*() const {return *m_ptr;}
};

int main(){

    Num<int> x {new int(10)};

    std::cout << x << "\n";
    
    Num<int> y {std::move(x)};

    std::cout << x << "\n";
    std::cout << y << "\n";

    return 0;
}