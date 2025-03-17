#include<stdio.h>

int main(){
    int n,x=1;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            x=1;
        for(int j=n;j>=i;j--)
            printf(" ");
        for(int k=1;k<=i;k++)
            printf(" %d",x++);
        printf("\n");
    }
}
