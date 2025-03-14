//DISPLAY THIS GP 3,12,48,.......,N'TH
#include<stdio.h>

int main()
{
    int x,ratio=4,term=3;
    printf("ENTER A NUMBER : ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++)
    {
        printf("%d\n",term);
        term=term*ratio;
    }
    return 0;
}
