#include<stdio.h>

int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(int i=x;i>=1;i--){
        for(int j=x;j>=i;j--)
            printf(" ");
        for(int k=2*i-1;k>=1;k--)
            printf("*");
        printf("\n");
    }
}
