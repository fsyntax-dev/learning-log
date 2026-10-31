#include <iostream>
#include <string>
#include <string_view>

class Ball{
private:
    std::string m_color{};
    double m_radius{};

public:
    // Constructor
    Ball(std::string_view color, double radius) : m_color{color}, m_radius{radius}{
    }

    // Setter
    void setColor(std::string_view color){m_color = color;}
    void setRadius(double radius){m_radius = radius;}

    // Getter
    const std::string& getColor() const {return m_color;}
    const double& getRadius() const {return m_radius;}

    void print(){
        std::cout << "Ball Color : " << getColor()  << "\n";
        std::cout << "Ball Radius: " << getRadius() << " cm" << "\n";
        std::cout << "\n";
    }
};

int main(){

    Ball basketball {"Orange", 7.50};
    basketball.print();

    Ball football {"White", 6.70};
    football.print();

    football.setColor("Black & White");
    football.setRadius(6.60);
    football.print();
    
    return 0;
}