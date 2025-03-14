//100,97,94,.....,last positive digit
#include<stdio.h>

int main()
{
    int term,diff = 3;
    printf("ENTER THE FIRST TERM : ");
    scanf("%d",&term);
    for(int i=1;;i++)
    {
        if(term>=0){
            printf("%d\n",term);
            term=term-3;}
        else
            break;
    }
}
