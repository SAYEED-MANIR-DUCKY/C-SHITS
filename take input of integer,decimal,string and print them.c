#include<stdio.h>

int main(){
int number;
float decimal;
char name[20];

printf("Enter a integer value: ");
scanf("%d",&number);
printf("Entered number : %d\n",number );
printf("Enter a decimal number: ");
scanf("%f",&decimal);
printf("Entered number : %.2f\n",decimal );
printf("Enter your name : ");
scanf("%s",&name);
printf("Your name : %s",name);
return 0;
}
