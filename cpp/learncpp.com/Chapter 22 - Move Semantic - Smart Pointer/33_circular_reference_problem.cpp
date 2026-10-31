#include <iostream>
#include <memory>

// circular reference - smart pointer own another smart pointer
//                    - destructor won't called because reference counter didn't reach zero
//                    - because the owned smart pointer keep it alive
//                    - to deallocated smart pointer the last smart pointer must out of scope 

class Num{
private:
    int m_currentNum{};
    std::shared_ptr<Num> m_nextNum;

public:
    Num(int x) : m_currentNum{x} {std::cout << m_currentNum << " allocated" << "\n";}
    ~Num() {std::cout << m_currentNum << " deakkicated" << "\n";}

    friend void linkNum(std::shared_ptr<Num>& numOne, std::shared_ptr<Num>& numTwo){
        numOne->m_nextNum = numTwo;
        numTwo->m_nextNum = numOne;

        std::cout << numOne->m_currentNum << " linked with " << numTwo->m_currentNum << "\n";
    }
};


int main(){

    {
        std::shared_ptr<Num> numOne {std::make_shared<Num>(10)};
        std::shared_ptr<Num> numTwo {std::make_shared<Num>(20)};

        linkNum(numOne, numTwo);
    }

    std::cout << "placeholder" << "\n";

    return 0;
}