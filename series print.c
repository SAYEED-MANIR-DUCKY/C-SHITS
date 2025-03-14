#include<stdio.h>

int main()
{
    int x;
    printf("ENTER THE VALUE OF X: ");
    scanf("%d",&x);
    for(int i=1;i<=x;i+=2)
    {
        printf("%d",i);
    }
}
