#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    void display1()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Person : public Student
{
public:
    int id;
    void display2()
    {
        cout << "Id: " << id << endl;
        display1();
    }
};

int main()
{

    Person p;
    p.id = 111;
    p.name = "Hafizur Rahman";
    p.age = 27;
    p.display2();

    return 0;
}