#include <stdio.h>

int main()
{

    int arr[] = {12, 1, 3, 12, 42, 13};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Size = %d\n", size);

    for (int i = 0; i < size; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}