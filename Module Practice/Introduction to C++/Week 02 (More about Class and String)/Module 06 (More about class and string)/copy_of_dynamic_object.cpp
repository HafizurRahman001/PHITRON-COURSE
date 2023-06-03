#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

int main()
{

    Person *rakib = new Person("Rakib Mia", 25);
    Person *sakib = new Person("Sakib Mia", 20);

    // copy of object sakib to rakib
    *rakib = *sakib;
    delete sakib;

    cout << rakib->name << endl;

    return 0;
}