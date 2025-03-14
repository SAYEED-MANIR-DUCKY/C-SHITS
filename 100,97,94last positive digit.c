
//100,97,94,.....,last positive digit
#include<stdio.h>

int main()
{
    int term,diff = 3;
    printf("ENTER THE FIRST TERM : ");
    scanf("%d",&term);
    for(int i=1;term>0;i++){
        printf("%d\n",term);
        term=term-diff;}

}
