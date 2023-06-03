#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int maximum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        int result = max(maximum, x);
        maximum = result;
    }
    cout << maximum;

    return 0;
}