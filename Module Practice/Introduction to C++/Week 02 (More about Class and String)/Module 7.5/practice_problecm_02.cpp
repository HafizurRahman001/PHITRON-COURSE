#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

// creating a function for sorting the array of object
bool compare(Student a, Student b)
{
    if (a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    return a.marks > b.marks;
}

int main()
{

    int n;
    cin >> n;
    Student a[n];

    // taking array of object input;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }

    // sorting the array of object based on marks and roll
    // sort(a, a + n, compare);

    // printing the array of object
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }

    return 0;
}