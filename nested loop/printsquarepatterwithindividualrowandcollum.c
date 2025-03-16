#include<stdio.h>

int main(){
    int x,y;
    printf("Enter Row Number : ");
    scanf("%d",&x);
    printf("Enter Column Number : ");
    scanf("%d",&y);
    for(int i=1;i<=y;i++)
    {
        for(int j=1;j<=x;j++)
            printf(" *");

        printf("\n");
    }


}
