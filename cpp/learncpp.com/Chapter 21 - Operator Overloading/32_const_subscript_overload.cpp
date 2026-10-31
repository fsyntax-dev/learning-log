#include <iostream>

class Num{
private:
    int m_list[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
public:
    Num() = default;
    
    int& operator[](int index){                 // for non const object
        return m_list[index];
    }

    const int& operator[](int index) const {    // for const object
        return m_list[index];
    }
};

int main(){
    
    // non const object
    Num list_x {};
    list_x[5] = 50;
    std::cout << list_x[5] << "\n";


    // const object
    const Num list_y {};
    std::cout << list_y[5] << "\n";

    return 0;
}