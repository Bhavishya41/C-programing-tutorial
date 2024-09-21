#include<stdio.h>

int main(){
    int a;
    printf("enter the length of the rectangle ");
    scanf("%d", &a);
    
    int b;
    printf("enter the width of the rectangle ");
    scanf("%d", &b);
    
    int c;
    c=a*b;
    printf("the area of the rectangle is %d", c);

    return 0;
}
