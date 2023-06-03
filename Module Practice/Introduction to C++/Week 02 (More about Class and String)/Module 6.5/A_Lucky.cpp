#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        // convert string digit to number digit
        int intNum = stoi(s);

        int sumOfFirstThreeDigit = 0;
        int sumOfLastThreeDigit = 0;

        // storing first three digit and last three digit
        int firstThreeDigit = intNum / 1000;
        int lastThreeDigit = intNum % 1000;

        while (firstThreeDigit != 0)
        {
            sumOfFirstThreeDigit += firstThreeDigit % 10;
            firstThreeDigit /= 10;
        };
        while (lastThreeDigit != 0)
        {
            sumOfLastThreeDigit += lastThreeDigit % 10;
            lastThreeDigit /= 10;
        }

        // checking the condition
        if (sumOfFirstThreeDigit == sumOfLastThreeDigit)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}