#include<stdio.h>

int main()
{
    int a,b;
    printf("enter two numbers:");
    scanf("%d %d", &a, &b);
    printf("\nbitwise and %d",a&b);
    printf("\nbitwise or %d",a|b);
    printf("\nbitwise xor %d",a^b);
    printf("\nbitwise complement %d",~b);
    printf("\nbitwise right shift %d",b>>2);
    printf("\nbitwise left shift %d",b<<2);
    
    
}
