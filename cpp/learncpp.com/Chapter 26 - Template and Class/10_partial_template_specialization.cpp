#include <iostream>

template <typename T, int size>
class Array{
private:
    T m_array[size];

public:
    const T& operator[](int index) const {return m_array[index];}
    T& operator[](int index){return m_array[index];}
};

template<typename T, int size>
void print(const Array<T, size>& array){
    for(int i{0}; i < size; ++i){
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}

template <int size>
void print(const Array<char, size>& array){
    for(int i{0}; i < size; ++i){
        std::cout << array[i];
    }
    std::cout << "\n";
}

int main(){

    Array<char, 5> varA;
    varA[0] = 'h';
    varA[1] = 'e';
    varA[2] = 'l';
    varA[3] = 'l';
    varA[4] = 'o';

    print(varA);


    return 0;
}