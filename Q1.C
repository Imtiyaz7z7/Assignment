#include<stdio.h>
int main(){
    int num;
    printf("Enter a number below - \n");
    scanf("%d",&num);
    num = num%10;
    printf("the unit digit of a given number is %d",num);
    return 0;
}