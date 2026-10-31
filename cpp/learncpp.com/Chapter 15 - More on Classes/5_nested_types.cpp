#include <iostream>
#include <string>

class TrafficLight {
public:
    enum LightColor {Red, Yellow, Green};

    void printColor(LightColor color) {
        switch(color) {
            case Red    : std::cout << "Stop" << "\n";      break;
            case Yellow : std::cout << "Caution" << "\n";   break;
            case Green  : std::cout << "Go" << "\n";        break;
        }
    }
};


int main(){

    TrafficLight junction;
    junction.printColor(TrafficLight::Red);
    junction.printColor(TrafficLight::Green);

    return 0;
}