#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z'){
        printf("It's a lowercase character input!!!\nIts uppercase value:%c",ch-32);
    }
    else if(ch>='A'&&ch<='Z'){
        printf("It's a uppercase character input!!!\nIts lowercase value:%c",ch+32);}
    else
        printf("invalid character input!!!!");
    return 0;
}
