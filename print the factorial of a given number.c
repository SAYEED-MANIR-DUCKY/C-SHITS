#include<stdio.h>

int main()
{
    int n,ans=1;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        ans*=i;
    }
    printf("Factorial of %d = %d",n,ans);
    return 0;
}
