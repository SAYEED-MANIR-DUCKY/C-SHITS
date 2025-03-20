#include<stdio.h>

int main()
{
    int x,y,sum=0,x1;
    printf("ENTER A NUMBER : ");
    scanf("%d",&x);
    x1=x;
    while(x!=0){
        y=x%10;
        sum+=y*y*y;
        x=x/10;
    }

    if(x1==sum)
        printf("%d is a armstrong number!!!",x1);
    else
        printf("%d isn't a armstrong number!!!",x1);
    return 0;

}
