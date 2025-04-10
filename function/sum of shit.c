//Find the sum of the following series using user-defined function:  1/1! + 2/2! + 3/3! + …… +1/N!
#include<stdio.h>

float calculatesum(int);

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("RESULT = %f",calculatesum(n));
}

float calculatesum(int x){
    float sum=0;
    for(int i=1;i<=x;i++){
            int y=1;
            for(int j=1;j<=i;j++){
                y*=j;
            }
            sum+=1.0/y;

    }
    return sum;
}
