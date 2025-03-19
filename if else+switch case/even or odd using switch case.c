#include<stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    switch(num%2){
    case 0:
        printf("%d is a even number!!",num);
        break;
    case 1:
        printf("%d is a odd number!!",num);
        break;
    default:
        printf("invalid input!!!");

    }
    return 0;
}
