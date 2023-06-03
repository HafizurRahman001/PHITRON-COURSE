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

int main()
{
    Student rahim("Rahim Uddin", 201, 12, 'P');

    // printing the s object data
    cout << "Name: " << rahim.name << endl;
    cout << "Roll: " << rahim.roll << endl;
    cout << "Class: " << rahim.cls << endl;
    cout << "Section: " << rahim.section << endl;

    return 0;
}