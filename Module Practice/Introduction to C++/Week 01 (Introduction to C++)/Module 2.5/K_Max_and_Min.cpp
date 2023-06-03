#include <bits/stdc++.h>
using namespace std;

int main()
{

    int maximum = INT_MIN;
    int minimum = INT_MAX;

    for (int i = 0; i < 3; i++)
    {
        int x;
        cin >> x;

        maximum = max(maximum, x);
        minimum = min(minimum, x);
    }

    cout << minimum << " " << maximum;

    return 0;
}