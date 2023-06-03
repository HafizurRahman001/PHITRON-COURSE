#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    float gpa;
    // using Constructor
    Student(int x, float y)
    {
        id = x;
        gpa = y;
    }
    void display()
    {
        cout << id << " " << gpa << endl;
    }
};

int main()
{
    Student Hafiz(101, 3.22);
    // Hafiz.id = 101;
    // Hafiz.gpa = 3.25;
    Hafiz.display();

    return 0;
}