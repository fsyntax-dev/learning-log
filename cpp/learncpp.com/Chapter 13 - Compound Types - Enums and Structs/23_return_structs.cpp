#include <iostream>

struct Point3D{
    double x {};
    double y {};
    double z {};
};

Point3D getPoint(){
    Point3D temp {0.0, 0.0, 0.0};
    return temp;
}

int main(){

    Point3D point{getPoint()};

    return 0;
}