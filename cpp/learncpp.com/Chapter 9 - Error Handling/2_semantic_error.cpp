#include <iostream>

// semantic error - code do works but not as expected result

// Conditional Error
void conditionalError(int x){
    if(x >= 5){                                         // >= instead of >
        std::cout << x << " is greater than 5" << "\n";
    }
}

// Infinite Loop
void infiniteLoop(){
    int count{1};
    while(count <= 10){
        std::cout << count << "\n";
    }
}

// One by One Error - one step far / one step to short
void oneByOne(){
    for(int count{1}; count < 5; ++count){              // > instead of >=
        std::cout << count << "\n";                     // expected to print till 4
    }
}


// Operator Precedence - precedence means priority
void operatorPrecedence(int x, int y){
    if (!x > y)                                         // operator precedence issue
        std::cout << x << " is not greater than " << y << '\n';
    else
        std::cout << x << " is greater than " << y << '\n';
                                                        // ! has higher precedence than >
}

// Floating Point Precision Issues 
float precisionIssue(){
    float fPoint{0.123456789f};
    std::cout << fPoint << "\n";
    return fPoint;
}

double doubleSum(){
    double dNum{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

    if(dNum == 1){
        std::cout << "equal" << "\n";
    }
    else{
        std::cout << "not equal" << "\n";
        }
        return dNum;
}

// Integer Division
int division(int x, int y){
    int divide{x / y};              // example 5 / 3
    std::cout << divide << "\n";    // result will equal to 1 (round off)
    return divide;
}

// Accidental Null Statement        // A line of code that does nothing
char blowNuclear(){
    char c{};
    std::cout << "Y/N: ";
    std::cin >> c;

    if (c == 'Y' || c == 'y');      // This statement do nothing
    std::cout << "Launching...";    // Will always execute Should be in block
    return c;
}

// Miss Pick Operator - Assignment instead of Equality

char blowMissle(){
    char c{};
    std::cout << "Y/N: ";
    std::cin >> c;

    if (c = 'Y');{                      // == not =
        std::cout << "Launching...";}    
    return c;
}


int main(){

    // Forgetting to Call Function ()
    blowMissle;

    return 0;
}