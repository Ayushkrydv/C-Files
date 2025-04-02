#include<stdio.h>
#include<math.h>

int main(){
    
    int p;
    float r;
    int t;
    float si;
    float ci;
    float amount;

    printf("Enter p, r, t: ");
    scanf("%d %f %d", &p, &r, &t);

    si = (p * r * t) / 100;
    printf("The S.I = %f\n", si);


    amount = p * pow((1 + r / 100),t);
    ci = amount - p;
    printf("The C.I = %f\nn", ci);
    
    return 0;
}