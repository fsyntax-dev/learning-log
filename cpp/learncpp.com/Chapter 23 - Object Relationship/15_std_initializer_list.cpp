#include <algorithm>
#include <cstddef>
#include <iostream>
#include <initializer_list>

template <typename T>
class Array{
private:
    T* m_data{};
    std::size_t m_size{};

public:
    Array() = default;
    Array(std::size_t size) : m_size{size}, m_data{new T[size]} {}
    Array(std::initializer_list<T> list) : Array(list.size()) {
        std::copy(list.begin(), list.end(), m_data)
    }
    ~Array(){delete[] m_data;}

    Array(const Array& list) = delete;
    Array& operator=(Array& list) = delete;

    T& operator[](const std::size_t index){
        return m_data[index];
    }

    friend std::ostream& operator<<(std::ostream& out, const Array list){
        for(std::size_t i {0}; i < list.m_size; ++i){
            out << list.m_data[i] << " ";
            return out;
        }
    }
};


int main(){


    return 0;
}