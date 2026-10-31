#include <iostream>
#include <utility>

// std::move - function that cast arguments into rvalue reference
//           - so move semantic can be invoked

template <typename T>
class Num{
private:
    T* m_ptr{};

public:
    Num(T* ptr = nullptr) : m_ptr{ptr} {}
    ~Num() {delete m_ptr;}
    Num(const Num& ptr){
        m_ptr = new T;
        *m_ptr = *ptr.m_ptr;
    }
    
    Num(Num& ptr) : m_ptr{ptr.m_ptr} {
        ptr.m_ptr = nullptr;
    }

    Num& operator=(const Num&& ptr){
        if(&ptr == this){
            return *this;
        }
        else{
            delete  m_ptr;

            m_ptr = new T;
            *m_ptr = *ptr.m_ptr;

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

    T& operator*() {return *m_ptr;}
    T* operator->() {return m_ptr;}

    friend std::ostream& operator<<(std::ostream& out, const Num& num){
        out << num.m_ptr;
        return out;
    }
    
};

template <typename T>
void swapVal(T& x, T& y){
    T temp {std::move(x)};
    x = std::move(y);
    y = std::move(temp);             
}

template <typename T>
void swapVal(T* x, T* y){
    T temp {std::move(*x)};
    *x = std::move(*y);
    *y = std::move(temp);
}

template <typename T>
void printVal(T& x, T& y){
    std::cout << "x: " << *x <<"\n";
    std::cout << "y: " << *y <<"\n";
}

template <typename T>
void printVal(T* x, T* y){
    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";
}


int main(){
    
    Num<int> x {new int(10)};
    Num<int> y {new int(15)};

    printVal(x, y);

    swapVal(x, y);

    printVal(x, y);

    return 0;
}