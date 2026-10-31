#include <iostream>

// template has many kind
//      template type parameters        - template <typename T>
//      template non type parameters    - template <int N>
//      mixed                           - template <typenmae T, int N>

// template non type parameters - take constexpr value 

template <typename T, int size>
class Array{
private:
    T m_data[size];

public:
    Array(const T& init){
        for(int i {0}; i < size; ++i){
            m_data[i] = init;
        }
    }

    T& operator[](int index) {
        return m_data[index];
    }

    const T& operator[](int index) const {
        return m_data[index];
    }
    
    int getSize() const {
        return size;
    }

    void print() const {
        for(int i {0}; i < size; ++i){
            std::cout << m_data[i] << " ";
        }
        std::cout << "\n";
    }
};

int main(){

    Array<int, 5> array {5};

    return 0;
}