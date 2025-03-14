#include<stdio.h>

int main(){
    int a,b,a1=1;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++){
        a1*=a;
    }
    printf("%d^%d = %d",a,b,a1);
}
