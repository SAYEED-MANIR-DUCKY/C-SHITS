//Write a C program that reads an integer and returns the reverse of that number using function.
#include<stdio.h>

int calculatereverse(int);

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Reversed Number : %d",calculatereverse(n));
    return 0;

}
int calculatereverse(int x){
    int y,sum=0;
    while(x!=0){
        y=x%10;
        sum=y+sum*10;
        x=x/10;
    }
    return sum;
}
