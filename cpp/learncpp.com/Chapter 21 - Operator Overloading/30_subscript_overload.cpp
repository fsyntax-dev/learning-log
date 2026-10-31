#include <iostream>

// subscript operator[] - to access array

class NumArray{
private:
    int m_numList[10]{};

public:
    void setItem(int index, int value) {m_numList[index] = value;}
    int getItem(int index) const {return m_numList[index];}

};

int main(){

    NumArray list{};
    list.setItem(0, 1);
    list.setItem(1, 2);
    list.setItem(2, 3);

    for(int i {0}; i < 10; ++i){
        std::cout << list.getItem(i) << " ";
    }


    return 0;
}

// it works but not user friendly, use subscript overload instead