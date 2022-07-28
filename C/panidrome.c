#include <stdio.h>
#include<conio.h>


int main()
{
    int divide,rem,sum=0,n,a,b;
    printf("enter any number:");
    scanf("%d", &n);
    while(n!=0)
    {
        rem=n%2;
        divide=n/10;
        sum=sum+rem;
    }
    printf("\npanidrom number:%d",sum);
}