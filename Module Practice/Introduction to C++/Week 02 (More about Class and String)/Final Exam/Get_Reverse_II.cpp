#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{

    // taking the test case
    int n;
    cin >> n;

    // declaring the array of object
    Student arr[n];

    // taking the array of object input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id;
    }

    // replacing the student id
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int temp = arr[i].id;
        arr[i].id = arr[j].id;
        arr[j].id = temp;
        i++;
        j--;
    }

    // printing the array of object
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << endl;
    }

    return 0;
}