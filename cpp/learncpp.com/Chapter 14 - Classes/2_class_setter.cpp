#include <iostream>

// access specifier - private: and public:
// access functions - getter and setter
// getter - public member function that return value to private member function
// setter - public member function that set value of private member function

class Date{
private:
    int m_day{};
    int m_month{};
    int m_year{};

public:
    void setDay(int day)    {m_day = day;}
    void setMonth(int month){m_month = month;}
    void setYear(int year)  {m_year = year;}

};

int main(){


    return 0;
}