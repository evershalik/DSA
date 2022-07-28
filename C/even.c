//this code gives the even numbers between 1 and 1000
#include<stdio.h>
int main()
{
    int i;
    printf("even numbers between 1 and 1000 are:");
    for(i=1;i<=1000;i++)
    {
        if(i%2==0)
        {
            printf("\n%d",i);
        }
        else
        continue;
    }
}