#include <iostream>

template <typename T>
class Num{
private:
    T* m_ptr{};

public:
    Num(T* ptr = nullptr) : m_ptr {ptr} {}

    ~Num() {delete m_ptr;}

    Num(const Num& ptr){
        m_ptr = new T;                              // allocate new memory
        *m_ptr = *ptr.m_ptr;                        // assign value on that new memory
    }

    Num(Num&& ptr) noexcept : m_ptr {ptr.m_ptr} {
        ptr.m_ptr = nullptr;
    }

    Num& operator=(const Num& ptr){
        if(&ptr == this){
            return *this;
        }
        else{
            delete m_ptr;                           // deallocate memory

            m_ptr = new T;                          // allocate new memory
            *m_ptr = *ptr.m_ptr;                    // assign value on that memory
            return *this;
        }
    }

    Num& operator=(Num&& ptr){
        if(&ptr == this){
            return *this;
        }
        else{
            delete m_ptr;

            m_ptr = new T;                  
            m_ptr = ptr.m_ptr;                      
            ptr.m_ptr = nullptr;

            return *this;
        }
    }

    friend std::ostream& operator<<(std::ostream& out, const Num& num){
        out << num.m_ptr;
        return out;
    }
};

int main(){

    Num<int> x {new int(10)};
    Num<int> y {x};

    std::cout << x << "\n";
    std::cout << y << "\n";



    return 0;
}

// move semantic called
//      when the move semantics is defined  
//      when the argument is an rvalue

// copy semantic called
//      when the argument is lvalue
//      the argument is rvalue because the move semantics isn't defined

// compiler will create implicit move constructor and move assignment when:
//      no user declared copy constructor and copy assignment
//      no user declared move constructor or move assignment
//      no user declared destructor

