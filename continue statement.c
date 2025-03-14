//print all the even number using continue statement
#include<stdio.h>

int main()
{
    int x;
    printf("ENTER A NUMBER : ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        if(i%2==0)
            continue;

        printf("%d\n",i);
    }
}
