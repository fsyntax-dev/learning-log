#include <iostream>

// best practice - nested type at the beginning of the class
//               - so it can be access

class Fruit{
public:
    enum FruitType{apple, banana, cherry};              // Enum
private:
    FruitType m_type {};                                // Member Variable
public:
    FruitType getFruit() const {return m_type;}         // Getter
    void setFruit(FruitType fruit) {m_type = fruit;}    // Setter

    Fruit(FruitType type) : m_type {type} {}            // Constructor

    void checkFruit(){                                  // Member Function
    if(m_type == Fruit::FruitType::apple){
        std::cout << "An Apple" << "\n";
    }
    else{
        std::cout << "Not An Apple" << "\n";
    }
}
};

int main(){

    Fruit fruitOne {Fruit::FruitType::apple};
    fruitOne.checkFruit();

    return 0;
}