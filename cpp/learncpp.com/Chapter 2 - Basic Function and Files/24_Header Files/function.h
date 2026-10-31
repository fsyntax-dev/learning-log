//allow to put declaration here
//so just #include function.h
//this thing called as header guard - to avoid compile error
#define FUNCTION_H

#ifdef FUNCTION_H

int addition(int x,int y);
int subtraction(int x,int y);
int multiplication(int x,int y);
int division(int x,int y);
void printSum(int value);

#endif