//this code is for printing natural numbers in inverse order from n to 1

#include<stdio.h>
int main()
{
    int i,n;
    printf("enter any number:");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        printf("\n%d",i);
    }
}