#include <iostream>
#include <string>
#include <string_view>


class Rectangle{
private:
    int m_length{};
    int m_width{};
    std::string m_color{};
public:
    Rectangle(int length, int width) 
        : m_length{length}, m_width{width}{
            std::cout << "Area : " << length * width << "\n";
    }
    Rectangle(int length, int width, std::string_view color) 
        : Rectangle(length, width){
            std::cout << "Color: " << color << "\n";
    }

};
int main(){

    Rectangle shapeOne{15, 5};
    Rectangle shapeTwo{12,4, "Red"};

    return 0;
}