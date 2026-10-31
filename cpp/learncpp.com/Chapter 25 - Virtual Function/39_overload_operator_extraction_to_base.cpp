#include <iostream>

// solution 1
//      call member function as definition in overloading

class Base{
public:
    virtual std::string getName() const {return "Base";}

    friend std::ostream& operator<<(std::ostream& out, const Base& b){
        out << b.getName();
        return out;
    }
};

class Derived : public Base{
public:
    std::string getName() const override {return "Derived";}


};

int main(){

    Derived child{};
    Base& parent{child};

    std::cout << parent << "\n";
    // compiler upcast child from Derived to Base&
    // it resolve as b.Derived::getName()


    
    return 0;
}

// not gonna work if your class has more data - that why thats not enough

// sometimes call function to return the type isn't enough
//      .getName return a string
//      you can return a string nothing more

// goto solution 2