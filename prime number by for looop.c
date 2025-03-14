#include<stdio.h>

int main(){
    int x,isprime;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x<=1)
        isprime=0;
    else
    for(int i=2;x>=i*i;i++){
        if(x%i==0)
            isprime=0;
        else
            isprime=1;
    }
    if(isprime)
        printf("%d is a prime number!!",x);
    else
        printf("%d is not a prime number!!",x);

}
