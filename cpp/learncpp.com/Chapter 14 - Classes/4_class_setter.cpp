#include <iostream>

// getter - public member function that return value to private member function
// setter - public member function that set value of private member function

class Date{
private:
    int m_day{};
    int m_month{};
    int m_year{};
    // naming private member variable use "m_"
    
public:
    void setDay(int day)    {m_day = day;}
    void setMonth(int month){m_month = month;}
    void setYear(int year)  {m_year = year;}

    int getDay()    {return m_day;}
    int getMonth()  {return m_month;}
    int getYear()   {return m_year;}

};

int main(){

    Date today{};

    today.setDay(19);
    today.setMonth(7);
    today.setYear(2025);

    std::cout << today.getDay()   << "." 
              << today.getMonth() << "." 
              << today.getYear()  << "\n";

    return 0;
}