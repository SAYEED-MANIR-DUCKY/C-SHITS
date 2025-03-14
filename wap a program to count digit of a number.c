#include<stdio.h>

int main(){
    int n,count=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    int i=1;
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("THE DIGIT OF THAT NUMBER :%d",count);
    return 0;
}

