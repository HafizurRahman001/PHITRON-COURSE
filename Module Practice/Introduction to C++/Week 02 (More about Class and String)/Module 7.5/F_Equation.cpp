#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    long long int sum = 0, result = 1;
    cin >> a >> b;
    for (int i = 2; i <= b; i += 2)
    {
        for (int j = 1; j <= i; j++)
        {
            result = result * (a * 1);
        }
        sum = sum + result;
        result = 1;
    }
    cout << sum << endl;

    return 0;
}