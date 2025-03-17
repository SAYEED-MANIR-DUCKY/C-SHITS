#include<stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        char x='A';
        for(int j=n;j>=i;j--)
            printf(" ");
        for(int k=1;k<=i*2-1;k++)
            printf("%c",x++);

        printf("\n");}
    }

