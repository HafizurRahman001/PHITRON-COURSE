#include <bits/stdc++.h>
using namespace std;

int *func()
{
    int *a = new int[5];
    // taking array element
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main()
{

    int *b = func();
    // printing the array
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}
