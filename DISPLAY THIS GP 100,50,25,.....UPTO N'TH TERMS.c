//100,50,25,.........N'TH TERM
#include<stdio.h>

int main()
{
    float term,ratio =.5;
    printf("ENTER THE FIRST TERM : ");
    scanf("%f",&term);
    for(int i=1;term>=1;i++)
    {
        printf("%.2f\n",term);
        term*=ratio;
    }
}
