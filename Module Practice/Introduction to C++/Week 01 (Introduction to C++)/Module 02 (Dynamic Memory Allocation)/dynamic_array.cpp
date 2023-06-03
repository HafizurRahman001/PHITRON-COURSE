#include <bits/stdc++.h>
using namespace std;

int main()
{

    int *arr = new int[5];

    // taking array input
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // printing the array
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}