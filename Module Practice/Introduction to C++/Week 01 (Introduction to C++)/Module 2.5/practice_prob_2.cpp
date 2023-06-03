#include <bits/stdc++.h>
using namespace std;

int main()
{

    // taking the size of array A
    int a;
    cin >> a;
    int *arr_A = new int[a];

    // taking the element from input and store in array A
    for (int i = 0; i < a; i++)
    {
        cin >> arr_A[i];
    }

    // taking the size of array B
    int b;
    cin >> b;
    int *arr_B = new int[b];

    // copy the array A element to array B
    for (int i = 0; i < a; i++)
    {
        arr_B[i] = arr_A[i];
    }

    // delete the array A form the heap memory
    delete[] arr_A;

    // taking the other element from input and store in arr B
    for (int i = a; i < b; i++)
    {
        int y;
        cin >> y;
        arr_B[i] = y;
    }

    // printing the array
    for (int i = 0; i < b; i++)
    {
        cout << arr_B[i] << " ";
    }

    return 0;
}