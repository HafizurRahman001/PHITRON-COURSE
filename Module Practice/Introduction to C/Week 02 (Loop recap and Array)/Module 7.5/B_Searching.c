#include <stdio.h>

int main()
{

    int n, o, result = -1;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    scanf("%d ", &o);

    for (int i = 0; i < n; i++)
    {

        if (o == arr[i])
        {
            result = i;
            break; // break ব্যবহার না করলে যত গুলা উপাদান সর্ব শেষ যে উপাদান পাবে সেটাকেই আপডেট করে result এর ভিতরে ঢুকিয়ে দিবে।
        }
    }

    printf("%d", result);

    return 0;
}