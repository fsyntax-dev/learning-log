#include <iostream>
#include <string>

class Car{
public:
    int m_tyre{};
    int m_door{};

    Car() = default;
    Car(int tyre, int door) 
        : m_tyre{tyre}, m_door{door} {

        }
};

class Brand : public Car{
public:    
    std::string m_name{};

    Brand(std::string_view name, int tyre, int door) 
        : m_name{name}, Car{tyre, door} {

        }
};

class Model : public Brand{
public:
    std::string m_model{};

    Model(std::string_view model, std::string_view name, int tyre, int door) 
        : m_model{model}, Brand{name, tyre, door} {

        }
};

int main(){

    Model GT3 {"911 GT3 RS", "Porsche", 4, 2};



    return 0;
}

