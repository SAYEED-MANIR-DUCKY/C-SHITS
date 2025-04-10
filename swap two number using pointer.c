#include<stdio.h>

int main(){
    int a,b,temp;
    printf("Enter first number A: ");
    scanf("%d",&a);
    printf("Enter second number B: ");
    scanf("%d",&b);
    int* x=&a;
    int* y=&b;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("A=%d\n",a);
    printf("B=%d",b);

}
