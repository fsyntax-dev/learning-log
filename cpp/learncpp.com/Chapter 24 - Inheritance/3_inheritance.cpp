#include <iostream>
#include <string>
#include <string_view>

// when Class B inherit class A
//      it acquire the member functions and the member variables

class Person{
    
public:
    std::string m_name{};
    int m_age{};

    Person(std::string_view name = "", int age = 0) 
        : m_name{name}, m_age{age} {}     

    const std::string& getName() const {return m_name;}
    const int& getAge() const {return m_age;}        
};

class CriminalRecords : public Person{

public:
    int m_charge{};
    int m_conviction{};
    int m_acquittal{};

    CriminalRecords(int charge = 0, int convict = 0, int acquittal = 0) :
        m_charge{charge}, m_conviction{convict}, m_acquittal{acquittal} {

        }
};


int main(){

    CriminalRecords John {};

    John.m_name = "John Doe";
    // class CriminalRecords acquires member variables of class Person
    


    return 0;
}