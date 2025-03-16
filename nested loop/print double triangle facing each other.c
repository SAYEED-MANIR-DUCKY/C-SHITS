#include<stdio.h>

int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        for (int j=1;j<=i;j++)
            printf(" *");
        for (int k=1;k<=(x-i)*2;k++)
            printf("  ");
        for (int j=1;j<=i;j++)
            printf(" *");
        printf("\n");

    }
}
