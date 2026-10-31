#include <iostream>

// operator type() const;

class Cents{
private:
    int m_cents{};

public:
    Cents(int cents) : m_cents{cents} {}

    // overload int cast
    operator int() const {return m_cents;}
};

class Dollars{
private:
    int m_dollars{};

public:
    Dollars(int dollars) : m_dollars{dollars} {}

    operator Cents() const { return Cents{m_dollars * 100};}

};

void printCents(Cents cents){
    std::cout << cents << "\n";
}


int main(){

    Dollars money{10};

    printCents(money);


    return 0;
}