#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    int age;
    Student(int x, int y)
    {
        id = x;
        age = y;
    }
    void display()
    {
        cout << id << " " << age << endl;
    }
    void print()
    {
        cout << "Printing the method" << endl;
    }
};

int main()
{

    Student Hafiz(101, 25);
    Student *p = &Hafiz;
    p->display();

    return 0;
}