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
        std::copy(list.begin(), list.end(), m_data);
    }
    ~Array(){delete[] m_data;}

    Array(const Array& list) = delete;
    Array& operator=(const Array& list) = delete;

    T& operator[](const std::size_t index) {return m_data[index];}

    std::size_t length() const {return m_size;}


    friend std::ostream& operator<<(std::ostream& out, const Array<T>& list){
        for(std::size_t i {0}; i < list.m_size; ++i){
            out << list.m_data[i] << " ";
        }
        return out;
    }
};


int main(){

    Array<int> x (5);   // direct initialize () will prefer non-list or normal constructor
    Array<int> y {5};   // list initialize   {} will prefer list constructor

    std::cout << x.length() << "\n";    // array length 5
    std::cout << y.length() << "\n";    // array length 1

    std::cout << x << "\n";
    std::cout << y << "\n";

    return 0;
}