#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    int age;
    void display()
    {
        cout << id << " " << age << endl;
    }
    // using constructor
    Student(int x, int y)
    {
        id = x;
        age = y;
    }
    ~Student()
    {
        cout << "Calling The Destructor" << endl;
    }
    void print()
    {
        cout << "Checking" << endl;
    }
};

int main()
{

    Student Hafiz(101, 25);

    Hafiz.display();
    Hafiz.print();

    return 0;
}