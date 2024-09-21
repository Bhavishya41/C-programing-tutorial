#include<stdio.h>

int main(){
    int radius;
    printf("enter the radius of the cylinder\n");
    scanf("%d",&radius);
    
    int height;
    printf("enter the height of the cylinder\n");
    scanf("%d",&height);

    float volume;
    volume = (3.14*radius*radius*height); 
    printf("the volume of the circle is %f", volume);
    return 0;
}

