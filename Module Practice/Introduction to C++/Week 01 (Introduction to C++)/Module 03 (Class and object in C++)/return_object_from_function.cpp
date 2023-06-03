#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    // constructor
    Student(char *n, int r, int c, char s)
    {
        strcpy(name, n);
        roll = r;
        cls = c;
        section = s;
    }
};

// using a function
Student func()
{
    char name[100] = "Rahim Uddin";
    Student rahim(name, 105, 7, 'D');
    return rahim;
};

int main()
{
    Student rahim = func();

    // printing the s object data
    cout << "Name: " << rahim.name << endl;
    cout << "Roll: " << rahim.roll << endl;
    cout << "Class: " << rahim.cls << endl;
    cout << "Section: " << rahim.section << endl;

    return 0;
}