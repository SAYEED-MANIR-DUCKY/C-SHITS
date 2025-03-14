#include<stdio.h>

int main()
{
    int n,temp=0,temp1=1;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

        printf("%d ",temp1);
        temp1+=temp;
        temp+=temp1;

    }
}
