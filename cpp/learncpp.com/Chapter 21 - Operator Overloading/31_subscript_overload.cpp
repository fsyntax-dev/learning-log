#include <iostream>

// overload subscript operator - allow to access private memeber - m_list
// overload as member function

class NumList{
private:
    int m_list[10]{};

public:
    int& operator[] (int index);
};

int& NumList::operator[] (int index){
    return m_list[index];
}

int main(){

    NumList list{};

    list[0] = 1;

    std::cout << list[0] << "\n";


    return 0;
}