#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2!=0)
            continue;
        printf("%d\n",i);
    }
    return 0;
}
