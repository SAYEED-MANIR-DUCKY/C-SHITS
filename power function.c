//Write a C code using functions that takes two integers: a and b as inputs and returns the value of ab.
#include<stdio.h>
int calculatepower(int,int);

int main(){
    int a,b;
    printf("Enter the base : ");
    scanf("%d",&a);
    printf("Enter the power : ");
    scanf("%d",&b);
    printf("%d to the power %d = %d",a,b,calculatepower(a,b));

}
int calculatepower(int x,int y){
    int sum=1;
    for(int i=1;i<=y;i++){
            sum*=x;
    }
    return sum;
}
