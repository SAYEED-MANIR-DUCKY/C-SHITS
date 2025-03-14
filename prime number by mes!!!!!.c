#include<stdio.h>

int main(){
    int x,isprime;
    printf("ENTER A  NUMBER : ");
    scanf("%d",&x);
    if(x<2)
        isprime=0;
    else
    for(int i=2;i*i<=x;i++){
        if(x%i==0)
            isprime=0;
        else
            isprime=1;
    }
    if(isprime)
        printf("%d IS A PRIME NUMBER!!!!",x );
    else
        printf("%d IS NOT A COMPOSITE NUMBER!!!!",x );
    return 0;
}
