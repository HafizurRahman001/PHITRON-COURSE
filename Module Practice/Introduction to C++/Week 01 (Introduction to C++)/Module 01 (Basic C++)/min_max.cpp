#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    int minimum = min(a, b);
    int maximum = max(a, b);

    cout << minimum << " " << maximum << endl;
    return 0;
}