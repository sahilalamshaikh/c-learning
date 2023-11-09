#include<stdio.h>

int main(){

    char input[65];
    printf("Instructions");
    fgets(input,65,stdin);
    puts("thank you! Here are ur Instruction:");
    puts(input);
    return 0;

}

