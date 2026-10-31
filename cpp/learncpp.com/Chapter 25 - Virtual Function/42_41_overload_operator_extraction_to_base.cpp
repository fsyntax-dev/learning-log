#include <iostream>
#include <string>
#include <string_view>

struct Employee{
    std::string name{};
    int id{};

    friend std::ostream& operator<<(std::ostream& out, const Employee& e){
        out << "Employee " << e.id << " " << e.name;
        return out;
    }
};

class Base{
public:

    virtual std::ostream& print(std::ostream& out) const {
        out << "Base";
        return out;
    }

    friend std::ostream& operator<<(std::ostream& out, const Base& b){
        return b.print(out);
    }
};

class Derived : public Base{
private:
    Employee m_e{};

public:
    Derived(const Employee& e) : m_e{e} {}
    
    std::ostream& print(std::ostream& out) const override {
        out << "Derived: ";
        out << m_e;
        return out;
    }
};

int main(){


    Employee e {"John Doe", 25};
    Derived d_e {e};

    std::cout << d_e << "\n";

    Base* b_e{&d_e};

    std::cout << *b_e << "\n";

    return 0;
}