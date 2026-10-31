#include <iostream>

// temporary object - object has no name 
//                  - exist for duration of single expression

class Num{
private:
    int m_x{};
    int m_y{};

public:
    Num(int x, int y) : m_x{x}, m_y{y}{

    }

    // Getter
    int getX() const {return m_x;}
    int getY() const {return m_y;}

};

void print(Num value){
    std::cout << value.getX() << " " << value.getY() << "\n";
}

int main(){

    // Case 1: Pass Variable - Value A only used once in function print()
    Num valueA{5, 10};
    print(valueA);

    // Case 2: Create temporary Object Num directly pass to function print()
    print(Num {10, 20});    // Object has no name so its temporary
                            // When the function get called, the object destroyed after that

    // Case 3 - Same as Case 2 but not explicitly tell the type compiler
    print({5,6});           // Compiler deduces by itself           

    return 0;
}