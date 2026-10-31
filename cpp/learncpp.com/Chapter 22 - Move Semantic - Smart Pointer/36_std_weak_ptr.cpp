#include <iostream>
#include <memory>
#include <string>

class Person{
private:
    std::string m_name{};
    std::weak_ptr<Person> m_partner{};

public:
    Person(std::string name) : m_name{name} {std::cout << m_name << " allocated" << "\n";}
    ~Person() {std::cout << m_name << " deallocated" << "\n";}        

    friend void linkPartner(std::shared_ptr<Person>& p1, std::shared_ptr<Person>& p2){
        p1->m_partner = p2;
        p2->m_partner = p1;

        std::cout << p1 << " linked with " << p2 << "\n";
    }

    const std::string& getPerson() const {return m_name;}
    std::shared_ptr<Person> getPartner() const {return m_partner.lock();}

};


int main(){

    

    return 0;
}