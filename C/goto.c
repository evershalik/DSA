#include<stdio.h>

int main()
{
    int a;
    printf("enter any number:");
    scanf("%d", &a);
    if(a>10)
    {
        printf("goto function  A\n");
        goto A;
    }
    else
    {
        printf(" goto function  B\n");
        goto B;
    }

    A:
    printf("the number is greater than 10 :");
    exit(0);

    B:
    printf("the number is less than 10 :");
}