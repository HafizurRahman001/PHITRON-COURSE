#include <bits/stdc++.h>
using namespace std;

int main()
{

    char s, t;
    long long int a, b, c;
    cin >> a >> s >> b >> t >> c;
    long long int addition = a + b;
    long long int subtruction = a - b;
    long long int multiplication = a * b;

    if (s == '+')
    {
        if (a + b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << addition;
        }
    }
    else if (s == '-')
    {
        if (a - b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << subtruction;
        }
    }
    else if (s == '*')
    {
        if (a * b == c)
        {
            cout << "Yes";
        }
        else
        {
            cout << multiplication;
        }
    }

    return 0;
}