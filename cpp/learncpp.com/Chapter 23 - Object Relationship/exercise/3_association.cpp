#include <iostream>

// association - use a and doesn't own
//             - a class use another class object
//             - a class interact wtih another class

class Num{
private:
    int m_num{};

public:
    Num() = default;
    Num(int num) : m_num{num} {
        std::cout << m_num << " created" << "\n";
    }
    ~Num(){
        std::cout << m_num << " destroyed" << "\n";
    }   
    
    int getNum() const {return m_num;}

    friend std::ostream& operator<<(std::ostream& out, const Num num){
        out << num.m_num;
        return out;
    }
};

class Calc{
private:
    // object composition - aggregation
    const Num& m_x{};
    const Num& m_y{};

public:
    Calc(const Num& x, const Num& y) : m_x{x}, m_y{y} {
        std::cout << m_x << " " << m_y << " created" << "\n";
    }
    ~Calc() {
        std::cout << m_x << " " << m_y << " destroyed" << "\n";
    }    

    // association
    void interact(const Num& num){
        std::cout << num.getNum() << " interacted" << "\n";
    }

};

int main(){



    return 0;
}