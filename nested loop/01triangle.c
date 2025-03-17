#include<stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int x=1;x<=n;x++){
        for(int a=n;a>=x;a--)
            printf(" ");
        for(int b=1;b<=x;b++){
            if(b%2!=0)
                printf("0");
            else
                printf("1");

            }
            printf("\n");
        }
    }
