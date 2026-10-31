#include <iostream>

// object composition   - "has a" relantionship
//                      - human body "has a" heart
//                      - struct and class -referred to composite types

// object composition   - composition
//                      - aggregation

// death relantionship  - object responsible for existence of the part
//                      - part is created when object is created
//                      - part is destroyed when object is destroyed
//                      - body destoryed - heart also destroed

// unidirectional relantionship - part doesn't aware object exist
//                              - object aware part exist

// implement compositions - is the easiest relantionship in C++
//                        - created as struct or class with fundamental data members
//                        - data member exist directly as part of struct or class
//                        - data member lifetime bound to that struct or class itself

// composition part       - singular
//                          + body has a heart
//                        - multiplicative - an array
//                          + body have 10 fingers 

// to qualify composition -
//                          member part of class
//                          member belong to class at a time
//                          member existence managed by class
//                          member does not know existance of class

class Num{
private:
    int m_x{};
    int m_y{};

    // m_x and m_y is part of Num
    
public:
    Num(int x, int y) : m_x{x}, m_y{y} {}

    // Num has a m_x and m_y
};

int main(){



    return 0;
}