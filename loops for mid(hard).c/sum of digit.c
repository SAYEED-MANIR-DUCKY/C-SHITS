#include<stdio.h>

int main()
{
    int x,y,sum=0;
    printf("ENTER A NUMBER : ");
    scanf("%d",&x);
    printf("sum of digits of %d: ",x);
    while(x!=0){
        y=x%10;
        sum+=y;
        x=x/10;
    }
    printf("%d",sum);

}
