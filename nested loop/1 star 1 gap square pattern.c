#include<stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n;j++){
            if(i%2!=0){
                if(j%2!=0)
                    printf("*");
                else
                    printf(" ");
            }
            else if(i%2==0){
                if(j%2!=0)
                    printf(" ");
                else
                    printf("*");
            }
        }
        printf("\n");
    }
}
