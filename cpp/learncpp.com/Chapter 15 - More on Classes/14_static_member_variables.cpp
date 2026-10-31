#include <iostream>

class Num{
public:
    static int s_x; // static member inside class

};

int Num::s_x{1};    // must define static variable in global (kinda forward declaration)
                    // access it via ::

int main(){


    return 0;
}