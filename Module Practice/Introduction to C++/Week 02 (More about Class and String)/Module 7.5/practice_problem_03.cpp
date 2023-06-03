#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s, a;
    int count = 0;
    getline(cin, s);
    cin >> a;

    int length = a.length();

    // counting the matching name
    while (s.find(a) != -1)
    {
        count++;
        s.replace(s.find(a), length, " ");
    }
    cout << count;

    return 0;
}