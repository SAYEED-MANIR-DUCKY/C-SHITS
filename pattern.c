#include<stdio.h>

int main(){
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++)
            printf(" ");
        for(int k=i;k<=4;k++)
            printf("*");
        printf("\n");
    }
}
