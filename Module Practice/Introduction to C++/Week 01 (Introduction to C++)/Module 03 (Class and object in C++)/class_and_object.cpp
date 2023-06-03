#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
};

int main()
{
    Student rahim;
    rahim.roll = 101;
    rahim.cls = 10;
    rahim.section = 'B';
    char test[100] = "Hafizur Rahman";
    strcpy(rahim.name, test);

    // printing the s object data
    cout << "Name: " << rahim.name << endl;
    cout << "Roll: " << rahim.roll << endl;
    cout << "Class: " << rahim.cls << endl;
    cout << "Section: " << rahim.section << endl;

    return 0;
}