#include <bits/stdc++.h>
using namespace std;

void reversePrint(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        reversePrint(ss);
        cout << word << endl;
    }
}

int main()
{

    string s;
    getline(cin, s);

    stringstream ss(s);
    reversePrint(ss);

    return 0;
}