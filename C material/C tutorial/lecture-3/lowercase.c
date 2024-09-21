#include<stdio.h>

int main(){

    char ch;
    printf("Enter any letter:\n");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
        printf("the character is in lowercase");
    }
    else{
        printf("the character is not in lowercase");
    }

    return 0;
}