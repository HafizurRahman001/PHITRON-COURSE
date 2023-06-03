#include <bits/stdc++.h>
using namespace std;

int main()
{

    int arr[5] = {10, 40, 5, 20, 30};
    int size = sizeof(arr) / 4;
    // cout << size;
    // printing the array
    cout << "before the sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << endl;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // printing the array
    cout << "after the sorting" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}