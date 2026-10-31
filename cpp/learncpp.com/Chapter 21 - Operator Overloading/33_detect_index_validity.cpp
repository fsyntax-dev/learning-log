#include <iostream>
#include <cassert>
#include <iterator>

class Num{
private:
    int m_list[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

public:
    Num() = default;
    
    int& operator[](int index){
        assert(static_cast<std::size_t>(index) < std::size(m_list));
        return m_list[index];
    };
};

int main(){

    Num listX {};

    std::cout << listX[11] << "\n";

    return 0;
}