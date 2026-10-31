#include <iostream>
#include <string>
#include <string_view>

// solution 2
//       you want to print more than that
//       a class has complex memeber and want to print more

// virtual ostream + overload operator
//      virtual function    - to set how the print should be
//      overload operator   - call the function

class Human{
protected:
    std::string m_name{};
public:
    Human(std::string_view name) : m_name{name} {}
    virtual ~Human() = default;

    // virtual ostream
    virtual std::ostream& print(std::ostream& out) const {
        out  << m_name;
        return out;
    }

    // overload operator <<
    friend std::ostream& operator<<(std::ostream& out, const Human& b){
        return b.print(out);
    }

};

class Worker : public  Human{
protected:
    int m_id{};
public:
    Worker(std::string_view name, int id) : Human{name}, m_id{id} {}
    ~Worker() override = default;

    // override ostream
    std::ostream& print(std::ostream& out) const override{
        out << "Name: " << m_name << "\n"
            << "ID  : " << m_id << "\n";

        return out;
    }

};

int main(){

    Human* John{new Worker("John Doe", 25)};

    std::cout << *John << "\n";


    return 0;
}


// operator must be free function not virtual function