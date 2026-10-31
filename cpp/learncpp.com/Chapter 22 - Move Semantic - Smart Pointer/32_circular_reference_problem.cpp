#include <iostream>
#include <memory>

// circular reference - seperated shared_ptr object linked with each other
//                    - the shared object keep the other alive that why deestructor never called
//                    - A own B - A got destroyed but still own 

/*
    [objectOne] 
        ▲ │
        │ ▼
        own
        ▲ │
        │ ▼                     
    [ObjectTwo]

    objectOne created           - objectOne reference count = 1
    objectTwo created           - objectTwo reference count = 1

    objectOne owns objectTwo    - objectOne reference count = 2
    objectTwo owns objectOne    - objectTwo reference count = 2

    objectOne out of scope      - objectOne reference count = 1
    objectTwo out of scope      - objectTwo reference count = 1

    objectOne got destroyed but objectTwo not that why reference count stayed at 1
    objectTwo got destroyed but objectOne not that why reference count stayed at 1

*/        

class Num{
private:
    int m_x{};
    std::shared_ptr<Num> m_link;

public:
    Num(int x) : m_x{x} {std::cout << m_x << " allocated" << "\n";}
    ~Num() {std::cout << m_x << " deallocated" << "\n";}

    friend void linkPtr(std::shared_ptr<Num>& onePtr, std::shared_ptr<Num>& twoPtr){

        onePtr->m_link = twoPtr;
        twoPtr->m_link = onePtr;

        std::cout << onePtr << " linked with " << twoPtr << "\n";
    }

};

int main(){

    {
        std::shared_ptr<Num> numOne {std::make_shared<Num>(10)};
        std::shared_ptr<Num> numTwo {std::make_shared<Num>(20)};

        linkPtr(numOne, numTwo);
    }

    std::cout << "placeholder" << "\n";

    return 0;
}