#include<stdio.h>

int main(){
   /* int x,y=0;
    printf("ENTER A NUMBER :");
    scanf("%d",&x);
    printf("REVERSED NUMBER :");
    while(x!=0){
            y=x%10;
            x=x/10;
            printf("%d",y);
}
    return 0;
}*/
    int x,r=0;
    printf("ENTER A NUMBER :");
    scanf("%d",&x);
    while(x!=0)
    {
        r=r*10;
        r=r+(x%10);
        x=x/10;
    }
    printf("reversed number = %d",r);
    return 0;
    }

