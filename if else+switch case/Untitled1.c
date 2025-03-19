#include<stdio.h>

int main(){
    char com;
    float unit,price;
    printf("R for residential use\nC for commercial use\nEnter a character : ");
    scanf("%c",&com);
    printf("Enter the amount of used UNIT : ");
    scanf("%f",&unit);
    switch(com){
    case 'r':
    case ('R'):
        if(unit<=100)
            price=unit*4;
        else if(unit>100&&unit<=300)
            price=100*4+(unit-100)*6;
        else if(unit>=300)
            price=100*4+200*6+(unit-300)*8;
        if(price>1500)
            price=price+price*.07;
        break;
    case 'c':
    case ('C'):
        if(unit<=100)
            price=unit*6;
        else if(unit>100&&unit<=300)
            price=100*6+(unit-100)*8;
        else if(unit>=300)
            price=100*6+200*8+(unit-300)*10;
        if(price>1500)
            price=price+price*.1;
        break;
    default:
    printf("invalid character input!!!");
    return 1;
    }
    printf("Your Electricity bill=%.2f taka only",price);
    return 0;


}
