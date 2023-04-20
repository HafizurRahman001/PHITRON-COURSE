  for (int i = 0; i < n1; i++)
    {
        arr_3[i] = arr_1[i];
    }

    // copy of array 2 in array 3
    int j = 0;

    for (int i = n1; i < (n1 + n2); i++)
    {
        arr_3[i] = arr_2[j];
        j++;
    }