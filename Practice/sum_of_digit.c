 #include<stdio.h>
 
 int main(){
     int num;
     
     printf("Enter Num : ");
     scanf("%d",&num);
    int sum = 0; int r ;
    int rev = 0;
    do{
        r = num%10;
        sum = sum+r; // sum of digits
        rev = rev*10+r;  // reverse of number
        num = num/10;
    }while(num>0);
    printf("The sum of digit is %d ", sum);
    printf("The reverse of num is %d ", rev);
    return 0;
 }