#include<stdio.h>

int main()
{
    int x,t1=0,t2=1,nextterm;
    printf("ENTER A NUMBER : ");
    scanf("%d",&x);
    printf("FIBONACCI SEQUENCE : ");
    for(int i=0;i<=x;i++)
    {
        printf("%d ",t1);
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
}
