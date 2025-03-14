//see if a digit is a prime or not
#include<stdio.h>

int main()
{
    int x;
    printf("ENTER A DIGIT : ");
    scanf("%d",&x);
    for(int i=1;i*i<x;i++){
        if(x%i==0){

                printf("%d IS NOT A PRIME NUMBER!!!",x);
                break;
            }
            else
                printf("%d IS A PRIME NUMBER!!!!",x);
        }

    return 0;
}
