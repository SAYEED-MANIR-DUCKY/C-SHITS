#include<stdio.h>

void pnz(int);

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    pnz(n);
    return 0;
}
void pnz(int x){
    if(x<0)
        printf("Negative!!!");
    else if(x>0)
        printf("Positive!!!");
    else
        printf("Zero!!!");

}
