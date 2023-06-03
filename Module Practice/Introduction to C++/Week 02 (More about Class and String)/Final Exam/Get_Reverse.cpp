#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int math_marks;
    int eng_marks;
};

int main()
{

    // taking the test case
    int n;
    cin >> n;

    // declare a array of object
    Student arr[n];

    // taking array of object input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].math_marks >> arr[i].eng_marks;
    }

    // printing the array of object
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }

    return 0;
}