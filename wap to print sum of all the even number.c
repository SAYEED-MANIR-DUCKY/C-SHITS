#include<stdio.h>

int main()
{
    int n,sum=0;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    while(n!=0){
        if(n%2==0){
            sum+=n%10;
            n=n/10;
        }
        else
            n=n/10;
    }
    printf("Sum of the even digit :%d",sum);
}
