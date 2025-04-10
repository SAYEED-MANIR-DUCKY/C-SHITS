//Write a C program using 3 functions to compute diameter, circumference and area of a circle whose radius is given by the user as the input.
#include<stdio.h>

float calculatediameter(float radius);
float calculatecircumference(float radius);
float calculatearea(float radius);

int main(){
    float r;
    printf("Enter the radius : ");
    scanf("%f",&r);
    printf("Diameter: %.2f\n",calculatediameter(r));
    printf("Circumference: %.2f\n",calculatecircumference(r));
    printf("Area: %.2f",calculatearea(r));
}
float calculatediameter(float radius){
    float Diameter=2*radius;
    return Diameter;
}
float calculatecircumference(float radius){
    float circumference=2*3.1416*radius;
    return circumference;
}
float calculatearea(float radius){
    float area=3.1416*radius*radius;
    return area;
}
