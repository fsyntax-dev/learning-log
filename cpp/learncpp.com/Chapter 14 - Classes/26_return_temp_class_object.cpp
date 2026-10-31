#include <iostream>

class Num{
private:
    int m_NumX{};
    int m_NumY{};
    int m_NumZ{};
    
public:
    Num (int x, int y) : m_NumX{x}, m_NumY{y}{}
    Num (int x, int y, int z) : Num(x, y){
        m_NumZ = z;
    }

    int getX() const { return m_NumX; }
    int getY() const { return m_NumY; }
    int getZ() const { return m_NumZ; }
};

void print(Num value){
    std::cout << value.getX() << " " << value.getY() << "\n";
}

Num returnOne(){
    Num value {5,10};       
    return value;           // return by created variable
}

Num returnTwo(){
    return Num {5,10};      // return by Temporary Num Object 
}

Num returnThree(){
    return {5,10};          // return by Temporary implicitly deduces Num Object
}

int main(){

    print(returnOne());
    print(returnTwo());
    print(returnThree());

    return 0;
}