//display this ap-4,7,10,13,16...upto n terms...
#include<stdio.h>

int main()
{
    int n,term=4,common_diff=3;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",term);
        term+=common_diff;
    }
}
