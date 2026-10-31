#include <iostream>
#include <memory>

// circular reference - seperated shared_ptr object linked with each other
//                    - the shared object keep the other alive that why deestructor never called
//                    - A own B - A got destroyed but still own B
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

class Person{
private:
    std::string m_name{};
    std::shared_ptr<Person> m_partner;

public:
    Person(const std::string& name) : m_name{name} {
        std::cout << m_name << " allocated" << "\n";
    }    
    ~Person(){
        std::cout << m_name << " deallocated" << "\n";
    }

    friend void partner(std::shared_ptr<Person>& ptrOne, std::shared_ptr<Person>& ptrTwo){
        ptrOne->m_partner = ptrTwo;
        ptrTwo->m_partner = ptrOne;  
        std::cout << ptrOne->m_name << " partner with " << ptrTwo->m_name << "\n";
    }
};

int main(){
    {
        std::shared_ptr<Person> personOne {std::make_shared<Person>("John")};
        std::shared_ptr<Person> personTwo {std::make_shared<Person>("Alex")};
        partner(personOne, personTwo);
    } // out of scope but destructor never called
    
    std::cout << "placeholder" << "\n";

    return 0;
}

// recap for class
//      . operator to access object
//      -> operator to access pointer type
