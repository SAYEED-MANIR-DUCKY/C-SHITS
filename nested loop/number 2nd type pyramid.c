#include<stdio.h>

int main(){
    int n;
    int c=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

        for(int j=n;j>=i;j--)
            printf(" ");
        for(int j=1;j<=i*2-1;j++){
                if(c>=10)
                    c=0;
            printf("%d",c++);
        }
        printf("\n");
    }
}
