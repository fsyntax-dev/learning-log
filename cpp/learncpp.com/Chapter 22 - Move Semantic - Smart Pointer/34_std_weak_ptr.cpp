#include <iostream>
#include <memory>

// std::weak_ptr - solve the issue of circular reference

// std::weak_ptr - is an observer (poiting without owning)
//               - point to the same resource but doesn't own - didn't affect ref count


class Num{
private:
    int m_currentNum{};
    std::weak_ptr<Num> m_nextNum{};

public:
    Num(int x) : m_currentNum{x} {std::cout << m_currentNum << " allocated" << "\n";}
    ~Num() {std::cout << m_currentNum << " deallocated" << "\n";}
    
    friend void numCount(const std::shared_ptr<Num>& num){
        std::cout << num.get() <<" Ref Count: " << num.use_count() << "\n";
    }

    friend void linkedNum(std::shared_ptr<Num>& numOne, std::shared_ptr<Num>& numTwo){
        numOne->m_nextNum = numTwo;
        numTwo->m_nextNum = numOne;

        std::cout << numOne->m_currentNum << " linked with " << numTwo->m_currentNum << "\n";
    }
    

};

int main(){
    {
        std::shared_ptr<Num> numOne {std::make_shared<Num>(10)};
        std::shared_ptr<Num> numTwo {std::make_shared<Num>(20)};

        linkedNum(numOne, numTwo);

        numCount(numOne);
        numCount(numTwo);

    }

    std::cout << "placeholder" << "\n";
    
    return 0;
}