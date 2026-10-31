#include <iostream>

int gradeCheck(){
    int x{};
    std::cout << "Enter your grade: ";
    std::cin >> x;
    return x;
}

void printResult(int x){
    if(x > 75){
        std::cout << "Passed!" << "\n";
    }
    else{
        std::cout << "Failed" << "\n";
    }
}

void printResultTernary(int x){
    std::string statement{(x > 75 ? "Passed!" : "Failed!")};
    std::cout << statement << "\n";
}

int main(){

    int x{gradeCheck()};
    printResultTernary(x);
    //printResult(x);

    return 0;
}