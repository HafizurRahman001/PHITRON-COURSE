#include <bits/stdc++.h>
using namespace std;

int main()
{

    int *a = new int[5];

    // taking array input
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    // // printing the array
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    // increase array size
    int *b = new int[7];

    // copy the before a array element to b array
    for (int i = 0; i < 7; i++)
    {
        b[i] = a[i];
    }
    b[5] = 60;
    b[6] = 70;

    // printing the b array
    for (int i = 0; i < 7; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    // delete the a array
    delete[] a;

    // try to print the a array to check wheather it deleted or not
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << a[i] << " ";
    // }

    return 0;
}