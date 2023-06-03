#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);

    stringstream groupString(s);
    string word;

    groupString >> word;
    reverse(word.begin(), word.end());
    cout << word;

    while (groupString >> word)
    {
        reverse(word.begin(), word.end());
        cout << " " << word;
    }

    return 0;
}