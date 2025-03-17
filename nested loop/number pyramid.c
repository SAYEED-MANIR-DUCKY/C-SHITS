#include<stdio.h>

int main(){
    int n,x=1;
    char c='A';
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            if(x>=10)
            x=0;
            printf("%d",x);
            x++;
        }
        printf("\n");
    }
}
