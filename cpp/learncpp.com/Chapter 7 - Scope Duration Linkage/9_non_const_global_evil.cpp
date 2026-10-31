#include <iostream>

int g_Num{};                                // declare global

void changeNum(){
    g_Num = 2;                              // change global to 2
}

int main(){

    g_Num = 1;                              // change global to 1
    changeNum();                            // function called which change to 2


    if(g_Num == 1){
        std::cout << "Preparation";
    }
    else{
        std::cout << "Launching Nuclear";
    }
    
    return 0;
}