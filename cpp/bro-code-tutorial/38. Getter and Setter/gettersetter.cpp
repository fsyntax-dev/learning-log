#include <iostream>
using namespace std;
/*
Abstraction
    + Hiding unnecessary data from outside a class

    + Setter and Getter is just class methods 
    + Class methods is just function in class

    Getter
        + Function that makes a private attribute READABLE
    Setter
        + Function that makes a private attribute WRITEABLE
*/


class Stove{
    // can't be accessed outside of class(can't be called)
    
    private:
        int temp = 0;// hidden attribute

    public:
        //Getter
        int getTemp(){
            return temp;
        }
        //Setter
        void setTemp(int temp){
            if(temp < 0){
                this-> temp = 0;
            }
            else if(temp > 100){
                this-> temp = 100;
            }
            else{
                this->temp = temp;
            }
            
        }
};

int main() 
{
    Stove stove;

    stove.setTemp(-10);

    cout << "The temp of stove: " << stove.getTemp() << " degree"<< "\n";

    return 0;
    
}