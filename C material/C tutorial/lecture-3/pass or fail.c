#include<stdio.h>

int main(){

    float math,phy,python;
    printf("enter your maths marks:\n");
    scanf("%f",&math);
    printf("enter your maths marks: \n");
    scanf("%f",&phy);
    printf("enter your maths marks: \n");
    scanf("%f",&python);
    float total=math+phy+python;

    float percentage = (total/300)*100;
    if (math < 33 )
    printf("you are failed, you have scored %f",percentage);

    else if (phy < 33 )
    printf("you are failed %f",percentage);
    
    else if (python < 33)
    printf("you are failed %f",percentage);

    else if (percentage<40)
    printf("you are failed %f",percentage);

    else
    printf("congratulations you have passed the exam and you have scored %f",percentage);
    
    return 0;
}
