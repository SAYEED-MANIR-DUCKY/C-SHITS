#include<stdio.h>

int square(int x);

void calculatecube(int x)
{
    printf("cube of %d = %d",x , x * x *x);
}

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Square of %d = %d\n",n,square(n));
    calculatecube(n);
    return 0;
}

int square(int a){
    return a*a;
}

