// C program to print all natural numbers in reverse (from n to 1). - using while loop

#include<stdio.h>

int main()
{
    int i,n;
    printf("Enter any number :");
    scanf("%d", &n);
    i=n;

    printf("Natural numbers in reverse from 1 to n are :");
    while(i>=1)
    {
        printf("\n %d",i);
        --i;
    }
}