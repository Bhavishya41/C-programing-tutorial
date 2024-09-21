#include<stdio.h>

int main(){

    float p,q,r,s;
    printf("Enter 1st number:\n");
    scanf("%f",&p);

    printf("Enter 2nd number:\n");
    scanf("%f",&q);

    printf("Enter 3rd number:\n");
    scanf("%f",&r);

    printf("Enter 4th number:\n");
    scanf("%f",&s);

    if (p>q && p>r && p>s){
    printf("%f is the greatest number",p);}

    else if (q>r && q>s){
        printf("%f is the greatest number",q);
    }

    else if (r>s){
        printf("%f is the greatest number",r);
    }

    else{
        printf("%f is the greatest number",s);
    }

    return 0;
}