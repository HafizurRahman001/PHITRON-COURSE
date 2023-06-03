#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;

    // using constructor
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
    char name[100] = "Rahim Uddin";
    Student *rahim = new Student(name, 105, 12, 'D');

    cout << "Name: " << (*rahim).name << " Roll: " << rahim->roll << " Class: " << rahim->cls;

    return 0;
}