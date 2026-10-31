#include <iostream>

int main(){

    int secretNum{7};
    int guess{};

    do {
        std::cout << "Guess the number: ";
        std::cin >> guess;
    } while (guess != secretNum);           // if guess not the same as secret (true)
                                            // keep looping

    std::cout << "Correct!" << "\n";

    return 0;
}