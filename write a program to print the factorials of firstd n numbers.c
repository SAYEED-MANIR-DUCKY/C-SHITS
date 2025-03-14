#include<stdio.h>

int main()
{
    int n,ans=1;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        ans*=i;
        printf("Factorial of %d = %d\n",i,ans);
    }

    return 0;
}
