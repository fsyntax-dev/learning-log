#include <iostream>
using namespace std;

int main() 
{
    string question[] = {"1. What year was C++ created? ",
                         "2. Who invented C++? "            ,
                         "3. What is the predecessor of C++?",
                         "4. Shape of the Earth? "};

    string options[4][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                            {"A. Bjarne Stroustrup", "B. Donald Trump", "C. Elon Musk", "D. Napoleon Bonaparte"},
                            {"A. C", "B. C+", "C. C--", "D. B++"},
                            {"A. Oblate Spheroid", "B. Round", "C. Flat", "D. Donut"}}; 

    char answerKey[] = {'C', 'A', 'A', 'A'};

    int sizeQuestion = sizeof(question) / sizeof(question[0]);
    int sizeOptions = sizeof(options[0]) / sizeof(options[0][0]);
    
    char guess;
    int score = 0;


    for (int i = 0; i < sizeQuestion; i++) { 
        cout << "**********************" << "\n";
        cout << question[i] << "\n";
        cout << "**********************" << "\n";

        for (int j = 0; j < sizeOptions; j++) {
            cout << options[i][j]  << "\n";
        }

        cout << "Your answer: ";
        cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            cout << "Correct" "\n";
            score++;
        }
        else{
            cout << "Wrong" << "\n";
            cout << "The correct answer is: " << answerKey[i] << "\n";
        }
    }

    cout << "Result: " << (score/sizeQuestion)*100 << "%" << "\n";

    return 0;
}
