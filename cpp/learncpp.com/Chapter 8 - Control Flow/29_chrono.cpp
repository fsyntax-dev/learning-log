#include <iostream>
#include <chrono>
#include <thread>

int main(){

    std::cout << "2 Seconds..." << "\n";
    std::this_thread::sleep_for(std::chrono::seconds(2));
    std::cout << "Clocked!" << "\n";

    return 0;

}