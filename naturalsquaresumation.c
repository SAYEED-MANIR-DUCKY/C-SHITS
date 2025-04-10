//Find the sum of the following series using a function:  12 + 22 + 32 + … + N2
#include<stdio.h>

int calculatesum(int);

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("SUM = %d",calculatesum(n));
    return 0;
}
int calculatesum(int x){
    int sum=0;
    for(int i=1;i<=x;i++){
        sum+=i*i;
    }
    return sum;
}
