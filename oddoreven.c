#include<stdio.h>

void oddeven(int);

int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    oddeven(x);
}
void oddeven(int a){
    if(a%2==0)
        printf("Even!!");
    else
        printf("odd!!");
}
