#include <iostream>
#include <string_view>

// postfix only work if prefix is defined

// prefix by Reference  - update the value itself with making any copy
//                      - return update

// postfix by Value     - make temp copy of old value
//                      - then update
//                      - return old

// parameter in postfix acts as placeholder so compiler can differentiate

class Num{
private:
    int m_x{};
public:
    Num() = default;
    Num(int x) : m_x{x} {}

    friend std::ostream& operator<<(std::ostream& out, const Num& number){
        out << number.m_x;
        return out;
    };

    Num& operator++();
    Num operator++(int);
};

Num& Num::operator++(){
    ++m_x;
    return *this;
}

Num Num::operator++(int){
    Num temp{*this};            // temp var for old value
    ++(*this);                  // update value
    return temp;                // return old value
    
}

void incrementNum(Num& number, std::string_view type){
    if(type == "pre"){
        std::cout << ++number << "\n";
    }
    else if(type == "post"){
        std::cout << number++ << "\n";
    }
    else{
        std::cerr << "choose either pre or post" << "\n";
    }
}

int main(){

    Num x {10};
    Num y {10};

    incrementNum(x, "pre");
    incrementNum(x, "pre");
    incrementNum(x, "pre");

    incrementNum(y, "post");
    incrementNum(y, "post");
    incrementNum(y, "post");


    return 0;
}

// prefix   - return updated value after increment
// postfix  - return same value before increment