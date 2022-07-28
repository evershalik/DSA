//C program to print all natural numbers from 1 to n. - using while loop

#include<stdio.h>

int main()
{
    int i=1,n;
    printf("Enter any number :");
    scanf("%d", &n);
    printf("Natural numbers from 1 to n are :");
    while(i<=n)
    {
        printf("\n %d",i);
        ++i;
    }
}