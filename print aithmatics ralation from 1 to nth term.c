//1,3,5,9......nth term
#include<stdio.h>

int main()
{
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
        printf("%d\n",i*2-1);
}
