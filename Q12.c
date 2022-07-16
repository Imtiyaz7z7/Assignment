#include<stdio.h>
int main(){
    float a;
    printf("Enter the amount to be converted into USD - ");
    scanf("%f",&a);
    a = a/79.72;
    printf("The amount is %f",a);
    return 0;
}