#include<stdio.h>

int main(){
    int n;
    float term,sum=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for(float i=1;i<=n;i++){
            term=0;
        for(float j=1;j<=i;j++){
            term+=1.0/j;}
            sum+=term;
        }

    printf("%.2f",sum);}


