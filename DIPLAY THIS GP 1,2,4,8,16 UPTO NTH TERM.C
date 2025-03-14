//1.2.4.8.16......up to nth term
#include<stdio.h>

int main()
{
    int x,term=1,ratio=2;
    printf("ENTER A NUMBER : ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        printf("%d\n",term);
        term*=ratio;
    }
    return 0;

}
