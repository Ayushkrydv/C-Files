// with Function

#include<stdio.h>

void bubbleSort(int arr[], int size);
int main(){
    int arr[] = {12, 32, 1, 13, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    return 0;
}

void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr, j, j+1);
            }
        }
    }
    for(int i = 0; i < size; i++){
        printf("%d\t", arr[i]);
    }
}


// without function

// #include<stdio.h>

// int main(){
//     int arr[] = {12,10,13,1,4,63};

//     for(int i = 0; i < 6; i++){
//         for(int j = 0; j < 5-i; j++){
//             if(arr[j] >  arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
//     for(int i = 0; i<=5; i++){
//         printf("%d\t",arr[i]);
//     }
//     return 0;
// }