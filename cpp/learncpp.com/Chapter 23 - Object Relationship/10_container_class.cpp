#include <iostream>
#include <cstddef>

// functionality in class container
//      + constructor - construct container
//      + destructor
//      + remove object from container
//      + report number of object in container
//      + empty container
//      + access object in cotainer

template <typename T>
class Array{
private:
    std::size_t m_length{};
    T* m_data{};

public:
    Array(std::size_t length) : m_length{length} {
        m_data = new T[length];
    }   

    ~Array() {
        delete[] m_data;
    }

    Array(const Array<T>& array){
        m_data = new T[m_length];

        for(std::size_t i {0}; i < m_length; ++i){
            m_data[i] = array.m_data[i];
        }
    }

    std::size_t length() const {return m_length;}

    void resize(std::size_t newLength){
        if(newLength == m_length){
            return;
        }
        else{
            delete[] m_data;
            m_length = newLength;
            m_data = new T[newLength];
        }
    }

    void iterate() const {
        for(std::size_t i {0}; i < m_length; ++i){
            std::cout << m_data[i] << " ";
        }
        std::cout << "\n";
    }

    void set(){
        for(std::size_t i {0}; i < m_length; ++i){
            m_data[i] = i + 1;
        }
    }

    T& operator[] (std::size_t index){
        return m_data[index];
    } 

};

int main(){

    Array<int> num {10};

    num.set();
    num.iterate();

    num.resize(5);
    num.set();
    num.iterate();

    // what if container class object can constructor initializer list instead of size?
    // std::initializer list 

    return 0;
}

