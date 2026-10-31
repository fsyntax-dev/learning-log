#include <iostream>
#include <string>
#include <string_view>

class Human{
public:
    std::string_view whatType() const {return "Human";}
};

class Teacher : public Human{
public:
    std::string_view whatType() const {return "Teahcer";}

};

class Student : public Human{
public:
    std::string_view whatType() const {return "Student";}    
};

// this is where we use Base ref/ptr to derived object
// takkan nak overload function guna every Derived one by one - just use Base as obsolute for everything
void printType(const Human& base){
    std::cout << base.whatType() << "\n";
}

int main(){

    Teacher varA {};
    Student varB {};

    // problem here
    // this will call Human::whatType() instead
    printType(varA);
    printType(varB);

    return 0;
}

// the problem is when we called function in Derived - it called the function in Base instead

// to solve this - virtual function