#include<stdio.h>

int perfectnumber(int a);

int main(){
    int n,x;
    printf("Enter a number : ");
    scanf("%d",&n);
    x=perfectnumber(n);
    if(x==n)
        printf("%d is a perfect number!!!",n);
    else
        printf("%d isn't a perfect number!!!",n);
}

int perfectnumber(int a){
    int b=0;
    for(int i=1;i<=a/2;i++){
        if(a%i==0)
            b+=i;}
        return b;
}

