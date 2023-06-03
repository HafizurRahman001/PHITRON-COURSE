#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    // taking input
    for (int i = 0; i < n; i++)
    {
        int a;
        char b;
        cin >> a >> b;

        // printing the repeated element
        for (int i = 0; i < a; i++)
        {
            cout << b << " ";
        }
        cout << endl;
    }

    return 0;
}