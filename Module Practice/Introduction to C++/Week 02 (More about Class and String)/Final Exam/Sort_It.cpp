#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    long long int math_marks;
    long long int eng_marks;
};

// comparing the student marks based on given condition
bool compare(Student a, Student b)
{
    if ((a.math_marks + a.eng_marks) == (b.math_marks + b.eng_marks))
    {
        return a.id < b.id;
    }
    else
    {
        return ((a.math_marks + a.eng_marks) > (b.math_marks + b.eng_marks));
    }
}

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
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }

    // sorting the array of object depends on total marks of math and english
    sort(arr, arr + n, compare);

    // printing the array of object
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl;
    }

    return 0;
}