#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    char name[100];
    float height;
    int age;

    // using constructor
    Person(char *n, float h, int a)
    {
        strcpy(name, n);
        height = h;
        age = a;
    }
};

int main()
{
    char name1[100] = "Rahim Uddin";
    char name2[100] = "Karim Mia";

    Person *rahim = new Person(name1, 5.6, 32);
    Person *karim = new Person(name2, 4.5, 31);

    // comparing the two object
    if (rahim->age > karim->age)
    {
        cout << rahim->name;
    }
    else
    {
        cout << karim->name;
    }

    return 0;
}
