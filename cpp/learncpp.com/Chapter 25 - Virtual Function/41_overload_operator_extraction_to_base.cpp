#include <iostream>
#include <string>
#include <string_view>

class Base{
private:
    std::string m_name{};
public:
    Base(std::string_view name) : m_name{name} {}
    virtual ~Base() = default;

    virtual std::ostream& print(std::ostream& out) const {
        out << m_name << " ";
        return out;
    }

    friend std::ostream& operator<<(std::ostream& out, const Base& b){
        return b.print(out);
    }

};

class Derived : public Base{
private:
    int m_age{}; 
public:
    Derived(std::string_view name, int age) : Base{name}, m_age{age}{} 
    ~Derived() override = default;

    std::ostream& print(std::ostream& out) const override {
        Base::print(out);
        out << m_age;
        return out;
    }
};

int main(){

    Derived John("John Doe", 25);

    std::cout << John << "\n";

    return 0;
}