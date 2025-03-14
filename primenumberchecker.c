#include<stdio.h>

int main(){
    int x,isprime;
    printf("Enter a number :");
    scanf("%d",&x);
    if(x<1)
        isprime=0;
    for(int i=2;i<=x/2;i++){
        if(x%i==0)
            isprime=0;
        else
            isprime=1;}
    if(isprime)
        printf("%d is a prime number!!",x);
    else
        printf("%d isn't a prime number!!",x);
}
