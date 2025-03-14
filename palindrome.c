#include<stdio.h>

int main(){
    int x,y,x1,sum=0;
    printf("Enter a number : ");
    scanf("%d",&x);
    x1=x;
    while(x!=0){
        y=x%10;
        sum=sum*10+y;;
        x=x/10;
    }
    printf("reverse number = %d\n",sum);
    if(sum==x1)
        printf("%d is a palindrome!!!",x1);
    else
        printf("%d isn't a palindrome!!!",x1);
}
