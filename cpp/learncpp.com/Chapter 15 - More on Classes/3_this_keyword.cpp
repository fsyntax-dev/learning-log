#include <iostream>

class Simple{
private:
    int m_id{};
public:
    Simple(int id) : m_id{id} {}
    // static void setID(Simple* const this, int id) {this->m_id = id} // this how compiler rewrite it
    int getID() const {return m_id;}
    void setID(int id) {m_id = id;}

    void print() const {             
        std::cout << this->m_id;                                   
    }
};

int main(){

    Simple simple{1};
    simple.setID(2);                    // it looks like it only accept one argument but its not
                                        // Simple::setID(&simple, 2);     

    return 0;
}