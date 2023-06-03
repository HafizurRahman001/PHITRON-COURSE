#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{

    Student a[3];
    // taking array input
    for (int i = 0; i < 3; i++)
    {
        getline(cin, a[i].name);
        cin >> a[i].roll >> a[i].marks;
        getchar();
    }

    // finding the maximum result from the object;
    Student maximumObject;
    maximumObject.marks = INT_MIN;
    // printing the maximum marks
    for (int i = 0; i < 3; i++)
    {
        if (a[i].marks > maximumObject.marks)
        {
            maximumObject = a[i];
        }
    }

    cout << maximumObject.name << " " << maximumObject.roll << " " << maximumObject.marks << endl;

    // finding the minimum result from the object
    Student minimumObject;
    minimumObject.marks = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        if (a[i].marks < minimumObject.marks)
        {
            minimumObject = a[i];
        }
    }

    cout << minimumObject.name << " " << minimumObject.roll << " " << minimumObject.marks << endl;

    return 0;
}