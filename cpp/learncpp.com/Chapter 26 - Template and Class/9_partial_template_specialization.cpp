#include <iostream>
#include <algorithm>

template <typename T, int size>
class Array{
private:
    T m_array[size]{};

public:
    T* get() {return m_array;}

    const T& operator[](int index) const {return m_array[index];}
    T& operator[](int index) {return m_array[index];}
};

template <typename T, int size>
void print(const Array<T, size>& array){
    for(int i{0}; i < size; ++i){
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}

// overload of print() function for partially specialized StaticArray<char, size>
template <int size>
void print(const Array<char, size>& array){
    for(int i{0}; i < size; ++i){
        std::cout << array[i];
    }
    std::cout << "\n";
}

int main(){

    Array<char, 5> varA;
    constexpr std::string_view hello{"hello"};
    std::copy_n(hello.begin(), hello.size(), varA.get());

    print(varA);

    return 0;
}