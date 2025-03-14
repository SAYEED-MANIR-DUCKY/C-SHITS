#include<stdio.h>

int main(){
    int x,x1,r,sum=0;
    printf("ENTER A NUMBER : ");
    scanf("%d",&x);
    x1=x;
    while(x1!=0)
    {
        r=x1%10;
        sum+=(r*r*r);
        x1=x1/10;
    }
    if(sum==x)
        printf("%d is a Armstrong number!!",x);
    else
    printf("%d is not a Armstrong number!!",x);

}
