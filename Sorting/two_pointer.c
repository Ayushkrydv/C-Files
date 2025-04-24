// #include <stdio.h>

// int main()
// {
//     int target = 8;
//     int arr[] = {1, 2, 3, 4, 5, 8, 9};
//     for (int i = 0; i < 6; i++)
//     {
//         for (int j = i + 1; j < 7; j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 printf("Your Num is %d and %d\n", arr[i], arr[j]);
//             }
//         }
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int target = 8;
    int arr[] = {1, 2, 3, 4, 5, 8, 9, 10};
    for (int i = 0, j = 8; i <= j; i++, j--)
    {
        if (arr[i] + arr[j] == target)
        {
            printf("Your Num is %d and %d\n", arr[i], arr[j]);
            break;
        }
        else if (arr[i] + arr[j] > target)
        {
            j--;
        }
        else if (arr[i] + arr[j] < target)
        {
            i++;
        }
    }
    return 0;
}
