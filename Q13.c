#include<stdio.h>
int main(){
    int num,num1,num2,num3,num4,num5,num6,num7;
    printf("Enter the three digit number - ");
    scanf("\n%d",&num);
    num1=num%10;//555%10==5 -->unit digit
    num2=num%100;//555%100==55
    num3=num2-num1;//55-5==50
    num4=num3/10;//50/10==5 -->10's digit
    num5=num-num2;//555-55==500
    num6=num5/100;//500/100==5 -->100 digit
    num7=num6+num4+num1;
    printf("%d%d%d",num1,num6,num4);
    return 0;
}