#include <bits/stdc++.h>
using namespace std;

int main()
{

    // taking the string as input
    string s;
    getline(cin, s);

    // declare streamstring
    stringstream ss(s);
    string word;

    int flag = 0;

    // checking the "Ratul" word from stringstream
    while (ss >> word)
    {
        if (word == "Ratul")
        {
            flag = 1;
        }
    }

    // Print Yes or No based on flag condition
    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}