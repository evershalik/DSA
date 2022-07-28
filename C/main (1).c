/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// This code is for arithematic operations
#include <stdio.h>

int main()
{
    printf("Welcome to my code ");
    int a1, a2, sum, s1, s2, sub, m1, m2, mul, d1, d2, divide, r1, r2, rem;
    printf("\nEnter two numbers a1 and a2 for addition:");
    scanf("%d %d",&a1,&a2);
    sum=a1+a2;
    printf("%d addition of a1 and a2 is:",sum);
    
    //SUBTRACTION
    printf("\n Enter s1 and s2 for subtraction:");
    scanf("%d%d",&s1,&s2);
    sub=s1-s2;
    printf("\n sum of s1 and s2 is:",sub);
    
    //MULTIPLICATION
    printf("\n enter m1 and m2 for addition:");
    scanf("%d%d",&m1,&m2);
    mul=m1*m2;
    printf("\n product of m1 and m2");
    
    //division
    printf("\n Enter d1 and d2 for division:");
    scanf("%d%d",&d1,&d2);
    division=d1/d2
    printf("division of d1 and d2:",division);
    
    //REMAINDER
    printf("/n enter r1 and r2 for remainder:");
    scanf("%d%d",r1,r2);
    rem=r1%r2;
    printf("remainder of r1 and r2",rem);
    
    
    return 0;
    
    
    
    
}
