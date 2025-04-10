#include<stdio.h>

int calculatenumber(int,int);

int main(){
    int m,n,sum;
    printf("Enter the starting and ending number : ");
    scanf("%d %d",&m,&n);
    sum=calculatenumber(m,n);
    printf("SUM = %d",sum);
}
int calculatenumber(int x,int y){
    int sum=0;
    for(int i=x;i<=y;i++){
        sum+=i;
    }
    return sum;
}
