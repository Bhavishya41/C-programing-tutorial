#include<stdio.h>

int main(){

    int income;
    printf("Enter your income: \n");
    scanf("%d",&income);

    if (income>1000000){
    float tax30=(30.0/100)*income;
    printf("the total amount of tax paid to the government Rs%f ",tax30);}

    else if (income>500000 && income<1000000){
    float tax20=(20.0/100)*income;
    printf("the total amount of tax paid to the government Rs%f ",tax20);}

    else if (income>250000 && income<500000){
    float tax5;
    tax5=(5.0/100)*income;
    printf("the total amount of tax paid to the government Rs%f ",tax5);}

    else{
        printf("hatt gareeb");
    }

    return 0;
}