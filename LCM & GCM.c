#include<stdio.h>

int main()
{
    int n1,n2,num1,num2,remainder,gcm,lcm;
    printf("ENTER TWO NUMBER :");
    scanf("%d %d",&n1,&n2);
    num1=n1;
    num2=n2;
    while(n2!=0){
        remainder=n1%n2;
        n1=n2;
        n2=remainder;

    }
    gcm=n1;
    lcm=(num1*num2)/gcm;
    printf("GCM = %d\n",gcm);
    printf("LCM = %d",lcm);

    return 0;

}
