#include<stdio.h>
int main(){
    int num,num2,num3,num4;
    printf("Enter a number - ");
    scanf("%d",&num);
    num2 = num%10;
    num3 = num - num2;
    num4 = num3/10;
    printf("the number without its last digit is %d",num4);
    return 0;
}