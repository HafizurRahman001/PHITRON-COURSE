#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

bool compareFunc(Student a, Student b)
{
    if (a.marks < b.marks)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    Student a[3];
    // taking array input
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
    }

    // sorting the array of object using built-in sort() function
    sort(a, a + 3, compareFunc);

    // printing the array of obejct
    for (int i = 0; i < 3; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}