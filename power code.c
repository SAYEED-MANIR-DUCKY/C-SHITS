#include<stdio.h>

int main(){
    int a,b,x=1;
    printf("ENTER TWO NUMBER :");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++)
    {

        x=a*a;
        x*=a;
    }
    printf("%d",x);
}
