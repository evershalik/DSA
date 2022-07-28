// C program to check whether a number is even or odd.

#include<stdio.h>

int main()
{
    printf("~This code check whether inputed number is even or odd~");
    printf("\n\nEnter a number:");
    int a,b;
    scanf("%d", &a);
    b=a%2;
    if(b==0)
    {
        printf("The inputed number is even");

    }
    else
    {
        printf("The inputed  number is odd");
    }
    return 0;
}