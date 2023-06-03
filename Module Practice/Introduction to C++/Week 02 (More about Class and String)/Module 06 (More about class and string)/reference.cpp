#include <bits/stdc++.h>
using namespace std;

void fun(int &x)
{
    x = 100;
}

int main()
{

    int x = 10;
    fun(x);
    cout << x << endl;

    return 0;
}