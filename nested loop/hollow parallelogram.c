#include<stdio.h>

int main(){
    int m,n;
    printf("Enter row number : ");
    scanf("%d",&m);
    printf("Enter column number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--)
            printf(" ");
        for(int k=1;k<=m;k++){
            if(i==1||i==n||k==1||k==m)
            printf(" *");
            else
            printf("  ");}
        printf("\n");
    }
}

