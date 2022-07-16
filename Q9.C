#include<stdio.h>
int main(){
    int a = sizeof(int);
    int b = sizeof(float);
    int c = sizeof(char);
    int d = sizeof(double);
    printf("size of int = %d\n",a);
    printf("size of float = %d\n",b);
    printf("size of char = %d\n",c);
    printf("size of double = %d\n",d);
    return 0;
}