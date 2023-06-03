#include <bits/stdc++.h>
using namespace std;

class Counting
{
public:
    char characterName;
    int count;
};

// sorting function for sort ();
bool compare(Counting a, Counting b)
{
    if (a.count > b.count)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    int n;
    cin >> n;
    Counting freq[26];

    // initializing the frequency object
    for (char i = 'a'; i <= 'z'; i++)
    {
        freq[i - 'a'].characterName = i;
        freq[i - 'a'].count = 0;
    }

    // taking the input and counting the object count variable
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        freq[x - 'a'].count++;
    }

    // sorting the array of object as descinding
    sort(freq, freq + 26, compare);

    // printing the freq array
    for (int i = 0; i < 26; i++)
    {
        if (freq[i].count > 0)
        {
            string s(freq[i].count, freq[i].characterName);
            cout << s;
        }
    }

    return 0;
}