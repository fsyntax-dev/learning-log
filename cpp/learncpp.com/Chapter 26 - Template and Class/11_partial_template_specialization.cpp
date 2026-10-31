#include <iostream>

// partial template specilization for member functions
// but we can't partial function - partial only for class
// so need to partial class

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
    for(int i{0}; i < size; ++i){
        std::cout << m_array[i] << " ";
    }
    std::cout << "\n";
    std::cout << "specialized member function" << "\n";
}

template<int size>
class Array<double, size>{
private:
    double m_array[size]{};

public:
    const double& operator[](int index) const {return m_array[index];}
    double& operator[](int index) {return m_array[index];}

    void print();      
};

// so it look like we re write the same code - solution is better use inheritance

template<int size>
void Array<double, size>::print(){
    for(int i{0}; i < size; ++i){
        std::cout << m_array[i] << " ";
    }
    std::cout << "\n";
    std::cout << "partial specialized member function" << "\n";
}



int main(){

    Array<int, 5> varA;
    Array<double, 5> varB;
    varA.print();
    varB.print();




    return 0;
}