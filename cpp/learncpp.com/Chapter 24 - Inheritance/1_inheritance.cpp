#include <iostream>

// inheritance - inherit attributes from base class

/*
      base class
          |
          v
     derived class

  base class    = parent class
  derived class = child class


*/

/*
        ---fruit---
        |         |
        v         V
      apple    banana
      
  fruit is base class
  apple and banana is derived class from fruit    

*/


class X{
public:
  int m_x{};

  X() = default;
  X(int x) : m_x{x} {};


};

class Y : public X{
public:
  int m_y{};

  Y(int y) : m_y{y} {};


};

int main(){

  Y num {10};

  num.m_x = 12; 
  // class Y can access variable in class X

  std::cout << num.m_x << "\n";
  
  return 0;
}