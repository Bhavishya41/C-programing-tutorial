#include<stdio.h>

int main(){
    int c;
    printf("enter the tempperature in celcius\n");
    scanf("%d",&c);

    float f;
    f = ((9/5*c)+32); 
    printf("the temperature in ferenhite is %f", f);

    return 0;
}

