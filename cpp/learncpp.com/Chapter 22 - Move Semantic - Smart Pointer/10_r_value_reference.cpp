#include <iostream>

// r value references   - initialized with r value only
// single ampersand &   - l value reference
// double ampersand &&  - r value reference

class Fraction{
private:
    int m_numerator {0};
    int m_denominator {1};

public:
    Fraction(int numerator = 0, int denomiator = 1) 
        : m_numerator {numerator}, m_denominator {denomiator}
        {

        }

        friend std::ostream& operator<<(std::ostream& out, const Fraction& frac){
            out << frac.m_numerator << "/" << frac.m_denominator;
            return out;
        }

};

int main(){

    Fraction{3, 5};                 // destroy immediately
    auto&& ref {Fraction{3,5}};     // duration extended until at the end of the block
    
    std::cout << ref << "\n";       



    return 0;
}