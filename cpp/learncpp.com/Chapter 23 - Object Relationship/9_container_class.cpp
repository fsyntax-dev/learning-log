#include <iostream>
#include <cstddef>

// container class - class that store and manage objects (same type of fundamental type)
//                 - std::array and std::vector also container class

// container class - value container        - composition
//                 - reference container    - aggregation

// container class - can hold one type of data at a time

class Array{
private:
    int* m_data{};
    int m_size{};

public:
    Array(int size) : m_size{size}, m_data{new int[size]} {}
    ~Array() {
        delete[] m_data;
    }

    int& operator[](int index) {
        return m_data[index];
    }

    int size() const {return m_size;}

    void iterate() const {
        for (int i {0}; i < m_size; ++i){
            std::cout << m_data[i] << " ";
        }
        std::cout << "\n";
    }
};

int main(){

    Array num {3};

    num[0] = 1;
    num[1] = 2;
    num[2] = 3;


    num.iterate();

    return 0;
}