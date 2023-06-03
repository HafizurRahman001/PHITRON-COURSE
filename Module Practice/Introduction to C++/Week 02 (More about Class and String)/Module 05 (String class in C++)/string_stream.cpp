#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);
    stringstream groupString(s);
    // groupString <<s;
    string word;

    // while (groupString >> word)
    // {
    //     cout << word << endl;
    // }

    // coutn the word
    int count = 0;
    while (groupString >> word)
    {
        count++;
    }
    cout << count << endl;

    return 0;
}