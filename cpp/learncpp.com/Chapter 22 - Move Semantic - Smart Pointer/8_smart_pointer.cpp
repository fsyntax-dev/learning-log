#include <iostream>

template <typename T>
class Num{
private:
    T* m_ptr{};
public:
    Num(T* ptr = nullptr) : m_ptr{ptr} {
        std::cout << m_ptr << " Allocated" << "\n";
    }
    ~Num() {delete m_ptr;}

    friend std::ostream& operator<<(std::ostream& out, const Num num){
        out << num.m_ptr;
        return out;
    }

    T& operator*() const {return *m_ptr;}
    T* operator->() const {return m_ptr;}
}; 

class Resource{
public:
    Resource() {std::cout << "Allocated" << "\n";}
    ~Resource() {std::cout << "Deallocated" << "\n";}
    
};

void passByValue(Num<Resource> reso){
    std::cout << "My Address: " << reso <<"\n";
}

int main(){

    Num<Resource> reso{new Resource()};
    passByValue(reso);

    // reso.m_ptr and (reso) shared the same address
    // to solve - copy constructor and assignment operator
    

    return 0;

}


