#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string n, int ag)
    {
        name = n;
        age = ag;
    }
    void display(string x, string y)
    {
        cout << x << ": " << name << " " << y << ": " << age << endl;
    }
};

int main()
{

    Person rahim("Rahim Uddin", 24);
    rahim.display("Name", "Age");

    return 0;
}