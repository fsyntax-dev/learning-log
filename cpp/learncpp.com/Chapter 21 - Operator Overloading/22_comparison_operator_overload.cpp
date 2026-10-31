#include <iostream>

class Num{
private:    
    int m_x{};
public:
    Num() = default;
    Num(int x) : m_x{x} {}

    friend bool operator==(const Num& x, const Num& y);
    friend bool operator!=(const Num& x, const Num& y);
    friend std::ostream& operator<<(std::ostream& out, const Num& x);

};

bool operator==(const Num& x, const Num& y){
    return (x.m_x == y.m_x);
}

bool operator!=(const Num& x, const Num& y){
    return (x.m_x != y.m_x);
}

std::ostream& operator<<(std::ostream& out, const Num& x){
    out << x.m_x;
    return out;    
}

void check(const Num& x , const Num& y){
    if(x == y){
        std::cout << "X is the same with Y" << "\n";
        std::cout << x << "\t" << y << "\n";
    }
    else if (x != y){
        std::cout << "X isn't the same with Y" << "\n";
        std::cout << x << "\t" << y << "\n";
    }
    else{
        std::cout << "Invalid Input" << "\n";
    }
}

int main(){

    Num x {10};
    Num y {11};

    check(x, y);


    return 0;
}