#include <iostream>

class Num{
private:
    int m_x{};
public:
    Num() = default;
    Num(int x) : m_x{x} {}
    
    bool operator!() const {
        return m_x == 0;
    }

    friend std::ostream& operator<<(std::ostream& out, const Num& number){
        out << number.m_x << " ";
        return out;
    }

    friend void checkNum(Num& number);
};

void checkNum(Num& number){
    if(!number){
        std::cout << "Number is zero" << "\n";
        std::cout << "Number: " << number << "\n"; 
    }
    else{
        std::cout << "Number isn't zero" << "\n";
        std::cout << "Number: " << number<< "\n";
    }
}

int main(){

    Num x {10};
    Num y {15};
    Num z {0};

    checkNum(x);
    checkNum(y);
    checkNum(z);



    return 0;
}