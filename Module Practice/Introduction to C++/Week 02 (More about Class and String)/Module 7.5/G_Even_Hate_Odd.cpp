#include <bits/stdc++.h>
using namespace std;

int main()
{

    // প্রবলেমটা ভালভাবে বোঝার জন্য module: 7.5 এর ভিডিওটা ভাল করে দেখ ও বোঝ।
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }

        if (a % 2 == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            int countOdd = 0;
            int countEven = 0;
            int neededStep = a / 2;

            // counting even and odd
            for (int i = 0; i < a; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    countEven++;
                }
                else
                {
                    countOdd++;
                }
            }
            if (countOdd == countEven)
            {
                cout << 0 << endl;
            }
            else
            {
                if (countOdd > countEven)
                {
                    cout << abs(neededStep - countOdd) << endl;
                }
                else
                {
                    cout << abs(neededStep - countEven) << endl;
                }
            }

            // cout << countOdd << " " << countEven << endl;
        }
    }

    return 0;
}