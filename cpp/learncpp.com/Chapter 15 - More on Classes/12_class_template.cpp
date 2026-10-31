#include <iostream>

// Injected Class Name - happen in the scope of class if using template
//                     - any use of class_name inside class scope will be treated like class_name<T> implicitly
//                     - if out class scope need to use class_name<T>

template <typename T>
class Num{
private:
    // template applied
    T m_x{};
    T m_y{};
public:
    // define member function with template
    // the template of class also belong and can be applied to the end of class

    void setX(T x) {m_x = x;}
    void setY(T y) {m_y = y;}

    T getX() const {return m_x;}
    T getY() const {return m_y;}

    Num(T x,T y) : m_x{x}, m_y{y}{}

    void checkNum(){
        std::cout << (m_x > m_y ? m_x : m_y) << "\n";
    }
};

// outside class definition
// need to reapplied template
template <typename T>                                       // out of scope of class need to use <T>
void print(Num<T> value){                                   // Num<T> this thing related to injected class name
    std::cout << value.getX() << "\n";                      // but this isn't not the example
}                                                           // Injected Class Name happen implicitly but this explicitly

int main(){
 
    Num valueA(5.50,6.50);
    valueA.checkNum();
    print(valueA);

    return 0;
}