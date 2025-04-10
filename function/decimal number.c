//Write a C program using function that reads a floating point number n and an integer d and then prints the rounded value of n up to d decimal places. E.g. for n=5.678 and d = 2; it should print 5.68
#include<stdio.h>

float calculatevalue(float,int);

int main(){
    float n;
    int d;
    printf("Enter a number : ");
    scanf("%f",&n);
    printf("How much decimal places you want to keep : ");
    scanf("%d",&d);
    printf("The rounded value of %f up to %d decimal places : %.*f",n,d,d,calculatevalue(n,d));
}

float calculatevalue(float x,int y){
    int multiplier=1;
    for(int i=1;i<=y;i++){
        multiplier*=10;
    }
    int temp=x*multiplier+0.5;
    float value=(temp*1.0/multiplier);
    return value;

}
