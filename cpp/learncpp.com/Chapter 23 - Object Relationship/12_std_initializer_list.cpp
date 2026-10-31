#include <iostream>
#include <cstddef>
#include <cassert>
#include <initializer_list>
#include <algorithm>

// constructor with std::initializer_list as parameter
// as delegating constructor
// constructor body can be for loop or std::copy

template <typename T>
class Array{
private:
    T* m_data{};
    std::size_t m_length{};
    
public:
    Array() = default;
    Array(std::size_t length) : m_length{length}, m_data {new T[length]} {}
    Array(std::initializer_list<T> list) : Array(list.size()) {
        std::copy(list.begin(), list.end(), m_data);
    }
    ~Array() {
        delete[] m_data;
    }

    // disable shallow copy
    Array(const Array&) = delete;
    Array& operator=(const Array& list) = delete;

    void iterate(){
        for(std::size_t i {0}; i < m_length; ++i){
            std::cout << m_data[i] << " ";
        }
        std::cout << "\n";
    }


    T& operator[](std::size_t index){
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    T length() const {return m_length;}
};

template <typename T>
void setElements(Array<T>& array){
    for(std::size_t i {0}; i < array.length(); ++i){
        array[i] = (i * 2) + 1;
    }
}

int main(){

    Array numList {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    numList.iterate();

    setElements(numList);
    numList.iterate();


    return 0;
}