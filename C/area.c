//C program to calculate area of an equilateral triangle
#include<stdio.h>

int main()
{
    float s,a;
    printf("Enter the side of equilateral triangle(in cm):");
    scanf("%f", &s);
    a=0.433*(s*s);
    printf("area of equilateral triangle (in cm square)is: %f",a);

}
