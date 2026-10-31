#include <iostream>

// static member variables - member variables belong to class not object of the class
//                         - if it public can be accessed via ::
//                         - if it private can't be accessed (but to do it can be done with static member function)

class Num{
private:
    static inline int s_idGen{1};
    int m_id{};
public:
    int getID() const {return m_id;}

    Num() : m_id{s_idGen++} {}

};


int main(){

    Num personOne{};
    Num personTwo{};
    Num personThree{};

    std::cout << personOne.getID() << "\n";
    std::cout << personTwo.getID() << "\n";
    std::cout << personThree.getID() << "\n";

    return 0;
}