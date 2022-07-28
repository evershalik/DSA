//Write a C program to find the number that given number is palindrome or not

#include <stdio.h>


int main() 
{
    int a,r,sum=0,n;
    printf("enter any number:");
    scanf("%d", &n);
    a=n;
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        
        sum=(sum*10)+r;
    }
    printf("\nreverse no. is: %d",sum);
    if(sum==n)
    {
        printf("\nno. is palindrome");
        
    }
    else
    {
        printf("\nno. is not palindrome");
    }
}  
   