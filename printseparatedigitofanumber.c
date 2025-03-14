#include<stdio.h>

int main()
{
    int x,n;
    printf("Enter a number :");
    scanf("%d",&x);
    for(int i =1;;i++){
        if(x%10!=0){
            n=x%10;
                printf("%d",n);
                x=x/10;

        }
        else if (x%10==0){

                printf("%d",x%10);
                x=x/10;}
        else
            break;
    }
}
