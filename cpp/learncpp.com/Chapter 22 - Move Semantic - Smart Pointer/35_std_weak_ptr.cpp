#include <iostream>
#include <memory>

// downside of std::weak_ptr - don't have operator ->
//                           - so can't access it directly
//                           - so need to convert to std::shared_ptr

// convert weak_ptr to shared_ptr using .lock() function

class Num{
private:
    int m_currentNum{};
    std::weak_ptr<Num> m_nextNum{};                                                             // std::weak_ptr variable

public:
    Num(int x) : m_currentNum{x} {std::cout << m_currentNum << " allocated" << "\n";}
    ~Num() {std::cout << m_currentNum << " deallocated" << "\n";}    

    friend void linkedNum(std::shared_ptr<Num>& numOne, std::shared_ptr<Num>& numTwo){
        numOne->m_nextNum = numTwo;
        numTwo->m_nextNum = numOne;

        std::cout << numOne->m_currentNum << " linked with " << numTwo->m_currentNum << "\n";
    }

    std::shared_ptr<Num> getLinked() const {return m_nextNum.lock();}                           // convert std::weak_ptr to std::shared_ptr with .lock()
    int getNum() const {return m_currentNum;}
};

int main(){

    std::shared_ptr<Num> numOne {std::make_shared<Num>(10)};
    std::shared_ptr<Num> numTwo {std::make_shared<Num>(20)};

    linkedNum(numOne, numTwo);

    std::shared_ptr<Num> numOnePartner {numOne->getLinked()};

    return 0;
}