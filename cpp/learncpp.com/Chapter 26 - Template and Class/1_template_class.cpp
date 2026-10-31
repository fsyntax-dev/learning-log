#include <iostream>

template <typename T>
class Array{
private:
    std::size_t m_length{};
    T* m_data{};

public:
    Array(std::size_t length) 
        : m_data{new T[length]} , m_length{length} 
        {}
    ~Array(){
        delete[] m_data;
    }    

    // Disable shallow copies
    Array(const Array&) = delete;
    Array& operator=(const Array&) = delete;  
    
    void erase(){
        delete[] m_data;
        m_data = nullptr;
        m_length = 0;
    }

    T& operator[](std::size_t index);

    std::size_t getLength() const {return m_length;}
};

// not necessary to define outside class but 
// if define member function outside class - need its own template
template <typename T>
T& Array<T>::operator[](std::size_t index){
    return m_data[index];
}


int main(){

    Array<int> intArray {10};

    std::cout << intArray[1] << " " << intArray[5] << "\n";




    return 0;
}