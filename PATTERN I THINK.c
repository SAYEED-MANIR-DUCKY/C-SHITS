#include<stdio.h>

int main()
{
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++)
            printf(" ");
        for(int k=1;k<=2*i+1;k++)
            printf("*");
        printf("\n");
    }
    return 0;


}
