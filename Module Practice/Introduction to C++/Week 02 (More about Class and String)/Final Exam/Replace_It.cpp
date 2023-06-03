#include <bits/stdc++.h>
using namespace std;

int main()
{

    // taking test case
    int n;
    cin >> n;

    // taking the input of string
    for (int i = 0; i < n; i++)
    {
        string s, replacingWord;
        cin >> s >> replacingWord;

        // getting the size of replactingWord
        int size = replacingWord.length();

        // replace the string with $ sign;
        while (s.find(replacingWord) != -1)
        {
            s.replace(s.find(replacingWord), size, "$");
        }

        // printing the modified string
        cout << s << endl;
    }

    return 0;
}