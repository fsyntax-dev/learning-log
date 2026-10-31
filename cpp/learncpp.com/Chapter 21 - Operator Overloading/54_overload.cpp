#include <iostream>

template <typename T>
T average(const T* array, int size){
    T sum{};
    for(int i {0}; i < size; ++i){
        sum += array[i];                // operator += and /= involved - need to overloaded
    }
    sum /= size;
    return sum;
}


class Num{
private:
    int m_x{};

public:
    Num() = default;
    Num(int x) : m_x{x} {}

    friend std::ostream& operator<<(std::ostream& out, const Num number){
        out << number.m_x;
        return out;
    }

    Num& operator+=(const Num number){
        m_x += number.m_x;
        return *this;
    }

    Num& operator/=(int x){
        m_x /= x;
        return *this;
    }
    
    
};


int main(){

    Num numArray[] {Num{5}, Num{10}, Num{15}, Num{20}};

    std::cout << average(numArray, 4) << "\n";


    return 0;
}