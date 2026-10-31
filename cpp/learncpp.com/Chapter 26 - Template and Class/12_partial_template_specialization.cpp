#include <iostream>

template<typename T, int size>
class Array{
private:
    T m_array[size]{};

public:
    const T& operator[](int index) const {return m_array[index];}
    T& operator[](int index) {return m_array[index];}
    
    void print();
};

template<typename T, int size>
void Array<T, size>::print(){
    for(int i {0}; i < size; ++i){
        std::cout << m_array[i] << " ";
    }
    std::cout << "\n";
}

template<typename T, int size>
class ArrayChar : public Array<T, size>{
// cam biasa need to have primary temp first
};

template<int size>
class ArrayChar<char, size> : public Array<char, size>{
public:
    void print(){
        for(int i {0}; i < size; ++i){
        std::cout << this->m_array[i];
    }
    std::cout << "\n";        
    };
};

int main(){

    Array<int, 5> varA;
    varA.print();


    return 0;
}