#include<stdio.h>

int main()
{
   for(int i = 1; i <= 10; i++) {
        if(i % 2 == 0) continue;
        if(i > 7) break;
        printf("%d ", i);}

}
