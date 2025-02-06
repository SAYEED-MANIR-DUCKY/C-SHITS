#include<stdio.h>

int main()
{
    int a, b, add, sub, mult, div, remainder;
    printf("Enter 1st digit : ");
    scanf("%d",&a);
    printf("Enter 2st digit : ");
    scanf("%d",&b);
    add = a+b;
    sub = a-b;
    mult = a*b;
    div = a/b;
    remainder = a%b;
    printf("add = %d\nsub = %d\nmult = %d\ndiv = %d\nremainder = %d",add, sub, mult, div, remainder);
    return 0;
}
