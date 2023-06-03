#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];

    // taking array element input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sorting the array in ascending way;

    // sort(arr, arr + n);

    // sorting the array in descending way
    sort(arr, arr + n, greater<int>());

    // printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}