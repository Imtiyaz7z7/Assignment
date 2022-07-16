#include<stdio.h>
int main(){
    int a,b,c;
    a = 5;
    b = 4;
    printf("values before swap - \n");
    printf("a = %d & b = %d\n",a,b);
    c = a;
    a = b;
    b = c;
    printf("values after swap - \n");
    printf("a = %d & b = %d",a,b);
    return 0;
}