#include <iostream>

// best practice - make consructor accept single argument 
//               - make it explicit by default

// constructor that shouldn't be explicit
//      1. copy constructor
//      2. move constructor
//      3. default construcotr
//      4. multiple argument constructor

// constructor that should be explicit
//      1. single argument constructor

class NumOne{
private:
    int m_x{};
public:
    int getX() const {return m_x;}

    // explicit constructor
    explicit NumOne(int x) : m_x{x} {
        std::cout << x << "\n";
    } 
};

class NumTwo{
private:
    int m_x{};
public:
    int getX() const {return m_x;}

    // non explicit constructor
    NumTwo(int x) : m_x{x} {
        std::cout << x << "\n";
    }
};

NumOne numberOne(){
    return NumOne {5};              // need to return same class type
                                    // disallow implict conversion
}

NumOne numberOneOne(){
    return static_cast<NumOne>(5);  // explicit conversion literal 5 - int to NumOne
}

NumTwo numberTwo(){
    return {5};                      // implicit conversion
}

int main(){




    return 0;
}