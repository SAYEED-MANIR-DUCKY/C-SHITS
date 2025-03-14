#include<stdio.h>
#define PI 3.1416

int main()
{
    float radius,area,diameter,circumference;
    printf("Enter the radius of a circle : ");
    scanf("%f",&radius);
    area=PI*radius*radius;
    diameter=2*radius;
    circumference=2*PI*radius;
    printf("The Diameter is : %.2f\n",diameter);
    printf("The area is : %.2f\n",area);
    printf("The circumference is : %.2f",circumference);
    return 0;
}
