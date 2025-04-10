#include<stdio.h>

void swap(int* x,int*y);

int main(){
    int a = 2;
    int b = 3;
    swap(&a,&b);
    printf("%d\n",a);
    printf("%d",b);
    return 0;
}

void swap(int* x,int*y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
