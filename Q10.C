#include<stdio.h>
int main(){
    int num,num1,num2;
    printf("Enter a number - ");
    scanf("%d",&num);
    num1 = num%10;
    num2 = num-num1;
    printf("The value of the variable a is %d",num2);
    return 0;
}