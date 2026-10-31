#include <iostream>

// getter - public member function that return value to private member function
// setter - public member function that set value of private member function

class Date{
private:
    int m_day{};
    int m_month{};
    int m_year{};

public:
    int getDay()    {return m_day;}
    int getMonth()  {return m_month;}
    int getYear()   {return m_year;}


};

int main(){


    return 0;
}