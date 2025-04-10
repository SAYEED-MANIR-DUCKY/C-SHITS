#include<stdio.h>

int main(){
    int x,y,sum=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    for(int i=1;i<=x/2;i++){
        if(x%i==0)
            sum+=i;
    }
    if(sum==x)
        printf("%d is a perfect number!!!!",x);
    else
        printf("%d isn't a perfect number!!!!",x);
    return 0;
}
