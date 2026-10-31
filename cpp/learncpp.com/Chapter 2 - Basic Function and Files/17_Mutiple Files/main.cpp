void printResult(int value);
void printInput();
int askInput();
int add(int x, int y);

int main(){

    printInput();
    int x{askInput()};
    printInput();
    int y{askInput()};


    printResult(add(x, y));


    return 0;
}
