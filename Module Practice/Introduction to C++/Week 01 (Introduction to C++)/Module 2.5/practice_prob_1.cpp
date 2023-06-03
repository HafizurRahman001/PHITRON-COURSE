#include <bits/stdc++.h>
using namespace std;

int *get_array(int x)
{
    int *arr = new int[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    return arr;
}

int main()
{

    int n;
    cin >> n;
    int *a = get_array(n);

    // printing the array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}