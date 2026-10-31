#include <algorithm>
#include <iostream>
#include <initializer_list>

template<typename T>
class Array{
private:
    T* m_data{};
    std::size_t m_length{};

public:
    Array() = default;
    Array(std::size_t length)
        : m_length{length}, m_data{new T[length]} 
        {}
    
    Array(std::initializer_list<T> list) 
        : Array(list.size()) {
            std::copy(list.begin(), list.end(), m_data);
    }
    Array(const Array& list) = delete;
    Array& operator=(const Array& list) = delete;

    ~Array() {delete[] m_data;}

    T& operator[](std::size_t index){
        return m_data[index];
    }

    friend std::ostream& operator<<(std::ostream& out, const Array<T>& array){
        for(std::size_t i {0}; i < array.m_length; ++i){
            out << array.m_data[i] << " ";
        }
        return out;
    }

    T length() const {return m_length;}

};



int main(){

    Array x {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << x << "\n";

    std::cout << x[2] << "\n";
    x[2] = 10;

    std::cout << x << "\n";


    return 0;
}