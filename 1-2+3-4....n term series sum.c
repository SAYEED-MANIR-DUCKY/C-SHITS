#include<stdio.h>

int main()
{
    int x,sum=0;
    printf("ENTER A NUMBER : ");
    scanf("%d",&x);
    if(x%2==0)
        sum=-(x/2);
    else
        sum=-((x-1)/2)+x;
    printf("SUM = %d",sum);
    return 0;
}
