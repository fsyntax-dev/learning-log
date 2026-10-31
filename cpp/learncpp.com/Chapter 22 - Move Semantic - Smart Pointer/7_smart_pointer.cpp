#include <iostream>

template <typename T>
class Auto_ptr{
private:
    T* m_ptr{};
public:
    Auto_ptr(T* ptr = nullptr) : m_ptr{ptr} {
        std::cout << m_ptr << " Allocated" << "\n";
    }  
    Auto_ptr(const Auto_ptr& ptr) {
        std::cout << ptr.m_ptr << " Copied" << "\n";
        m_ptr = new T(*ptr.m_ptr);
        std::cout << m_ptr << " Allocated" << "\n";
    } 
    ~Auto_ptr() {
        std::cout << m_ptr << " Deallocated" << "\n";
        delete m_ptr;
    }

    friend std::ostream& operator<<(std::ostream& out, const Auto_ptr& ptr){
        out << ptr.m_ptr;
        return out;
    }

    T& operator*() const {return *m_ptr;}
    T* operator->() const {return m_ptr;}

};

int main(){

    Auto_ptr<int> reso {new int(10)};
    Auto_ptr another_reso {reso};

    std::cout << reso << "\n";
    std::cout << another_reso << "\n";

    return 0;
}