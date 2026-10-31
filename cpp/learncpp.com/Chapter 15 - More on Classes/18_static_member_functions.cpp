#include <iostream>

class Num{
private:
    static inline int s_IDGen{1};
public:
    static int getValue();          // static function
                                    // just a "declaration"

};              
                                    
                                    // static function outside class
int Num::getValue() {               // same function but as for "definition"
    return s_IDGen++;               // how does it has access to private member?
                                    // bcs we use scope resolution operator ::
                                    // Num:: means we have access anything inside class
}

int main(){


    return 0;
}