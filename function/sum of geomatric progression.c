/*Compute the sum of the following geometric progression using a function with 2 parameters r and n:
1 + r + r^2 + … + r^n (read the values of r and n from user*/
#include<stdio.h>

int CALCULATESUM(int,int);

int main(){
    int x,y;
    printf("enter the base : ");
    scanf("%d",&x);
    printf("Enter the power : ");
    scanf("%d",&y);
    printf("SUM = %d",CALCULATESUM(x,y));
}
int CALCULATESUM(int a,int b){
    int sum=1;
    for(int i=1;i<=b;i++){
            int y=1;
        for(int j=1;j<=i;j++){
            y*=a;
        }
        sum+=y;
    }
    return sum;

}
