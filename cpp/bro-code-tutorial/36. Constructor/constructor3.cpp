#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    float gpa;

    //Methods 2 - different names
    Student(string x, int y, float z) {
        name = x;
        age = y;
        gpa = z;
    }

    void getInfo(){
        cout << "\n";
        cout << name << "\n";
        cout << age << "\n";
        cout << gpa << "\n";
    }
};

int main() {
    Student s1("NameOne", 24, 3.33);
    Student s2("NameTwo", 22, 3.67);

    s1.getInfo();
    s2.getInfo();

    return 0;
}
