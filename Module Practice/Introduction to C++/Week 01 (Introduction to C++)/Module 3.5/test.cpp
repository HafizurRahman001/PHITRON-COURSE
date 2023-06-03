#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[3] = {'s', 'd', 'p'};
    int ar[3] = {1, 3, 2};
    sort(ar, ar + 1);

    for (int i = 0; i < 3; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}