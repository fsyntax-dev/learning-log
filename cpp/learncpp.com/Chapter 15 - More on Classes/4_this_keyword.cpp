#include <iostream>

// this - special pointer inside a class
//      - point to the object that called the function

//      - for precise, avoid redudancy

class NumOne{                       // normally i done this
private:
    int m_x{};
public:
    int getX() const {return m_x;}
    void setX(int x) {m_x = x;}

    NumOne() = default;
    NumOne(int x) : m_x{x} {}
};

class NumTwo{                       // but this for the sake of learning "this" keyword
private:
    int y{};
public:
    int getY() const {return y;}
    void setX(int y) {this->y = y;} // this->y refer to member variable not parameter  variable

    NumTwo() = default;
    NumTwo(int y) : y{y} {}
};

int main(){

    


    return 0;
}

// learned with chatGPT