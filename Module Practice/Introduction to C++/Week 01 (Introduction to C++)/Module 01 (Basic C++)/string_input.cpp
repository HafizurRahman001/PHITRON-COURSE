#include <iostream>
#include <utility>
using namespace std;

int main()
{

    char s[100];

    // without space
    // cin >> s;

    // with space
    cin.getline(s, 100);
    cout << s;
    return 0;
}