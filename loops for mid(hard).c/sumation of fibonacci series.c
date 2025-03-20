#include<stdio.h>

int main(){
    int n,n1=0,n2=1,nextterm,sum=0;
    printf("ENTER A NUMBER :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=n1;
        nextterm=n1+n2;
        n1=n2;
        n2=nextterm;
    }
    printf("%d",sum);

}

