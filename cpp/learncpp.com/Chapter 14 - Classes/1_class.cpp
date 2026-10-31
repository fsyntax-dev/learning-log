#include <iostream>

// member of structs are public by default
// member of class are private by default
// apply access specifier private: public: protected:

class Date{
                    // implicitly - can't be access outside class
    int forfun{};
private:            // explicitly 
    int day{};
    int month{};
    int year{};

public:             // can be access outside class
                    
    void print(){  // can access private member 
        std::cout << "Today is " << day << "." << month << "." << year << "\n";
    }

};

int main(){

    Date today{18, 7, 2025}; // didn't compile - no io overload or constructor

    today.print();

    return 0;
}