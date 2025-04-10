#include<stdio.h>

void england(){
    printf("you are in England\n");
    return;
}
void australia(){
    printf("you are in Australia\n");
    england();
    return;
}
void bangladesh(){
    printf("you are in Bangladesh\n");
    australia();
    return;
}
int main(){
    bangladesh();
    return 0;
}

