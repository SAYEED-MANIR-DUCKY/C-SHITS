#include<stdio.h>

int computenumber(float);

int main(){
    float n;
    printf("Enter a number : ");
    scanf("%f",&n);
    int x=computenumber(n);
    printf("Rounded number is: %d",x);
}
int computenumber(float x){
    int y=x;
    if(x-y>=0.5)
        return ++y;
    else
        return y;
}
