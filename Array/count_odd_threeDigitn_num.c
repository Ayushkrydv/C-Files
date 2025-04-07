#include<stdio.h>

void countOddDigitsNum(int arr[]);

int main(){

    int arr[5] = {334,2213,553,5,-333};
    countOddDigitsNum(arr);
    return 0;
}

void countOddDigitsNum(int arr[]) {
    int oddcount = 0;

    for (int i = 0; i < 5; i++) {
        int num = arr[i];
        int digitCount = 0;
        int oddDigitCount = 0;
            
        while (num > 0 || num < 0) {
            int rem = num % 10;
            if (rem % 2 != 0) {
                oddDigitCount++;
            }
            num /= 10;
            digitCount++;
        }

        if (digitCount == 3 && oddDigitCount == 3) { // Check for three-digit numbers with all odd digits
            oddcount++;
        }
    }

    printf("%d\n", oddcount); // Print the final count
}