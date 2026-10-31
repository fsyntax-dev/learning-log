#include <iostream>
#include <string>

class MyString{
private:
    std::string m_string{};

public:

    std::string& operator()(std::string string){
        return m_string = string;
    }

    void operator()(){
        m_string = "";
    }

    friend std::ostream& operator<<(std::ostream& out, const MyString string){
        out << string.m_string;
        return out;
    }

};

int main(){

    MyString name {};

    name("John");

    std::cout << name << "\n";

    name();

    std::cout << name << "\n";

    return 0;
}