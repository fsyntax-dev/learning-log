#include <iostream>

bool checkAnswer(int x){            // check true or false
    return x == 10;
}

void printAnswer(bool answer){      // print answer
    std::cout << std::boolalpha;
    std::cout << answer << "\n";
}

int main(){

    int x{};
    std::cout << "Enter the answer: ";
    std::cin >> x;

    printAnswer(checkAnswer(x));

    return 0;
}