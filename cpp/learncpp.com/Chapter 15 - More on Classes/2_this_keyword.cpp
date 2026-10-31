#include <iostream>

// most of the time we dont mention "this" explicitly
// this code just a proof that we can write it explicitly

class Simple{
private:
    int m_id{};
public:
    Simple(int id) : m_id{id} {}

    int getID() const {return m_id;}
    void setID(int id) {m_id = id;}

    void printOne() const {             // impicit use of "this"
        std::cout << m_id;        
    }
    void printTwo() const {             // explicit use of this
        std::cout << this->m_id;        // "this" pinter acess the implicit object
                                        // operator -> to select member m_id
    }
};

int main(){

    Simple simple{1};
    simple.setID(2);        

    return 0;
}