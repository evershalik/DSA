
//Write a C program to find the number of denominations for a given amount

#include <stdio.h>
#define SIZE 6

int main() 
{    
   int a,n,i;
   
   printf("enter any number:");
   scanf("%d", &n);
   printf("\nnumber of denominations for a given amount:\n\n");
   
   
   if (n>=500)
   {
       goto X;
   }
    
    else if(n>=100)
    {
        goto A;
    }
    else if(n>=50)
    {
        goto B;
    }
    else if(n>=20)
    {
        goto C;
    }
    else if(n>=10)
    {
        goto D;
    }
    else if(n>=1)
    {
        goto E;
    }
        
    X:
   {
       a=n/500; //count no of notes of 500
       n=n%500;
        
   }
   printf("value of n is %d",n);
   printf("\nNo. of notes of 500 are : %d",a);
    
    A:
    {
        a=n/100; //count no of notes of 100
       n=n%100;
    }
   printf("\nNo. of notes of 100 are : %d",a);
   
   B:
   {
       a=n/50; //count no of notes of 50
       n=n%50;
   }
   printf("\nNo. of notes of 50 are : %d",a);
   
   C:
    {
        a=n/20; //count no of notes of 20
       n=n%20;
    }
   printf("\nNo. of notes of 20 are : %d",a);
   
   D:
    {
        a=n/10; //count no of notes of 10
       n=n%10;
    }
   printf("\nNo. of notes of 10 are : %d",a);
   
   E:
    {
        a=n/1; //count no of coins of 1
       n=n%1;
    }
   printf("\nNo. of coins of 1 are : %d",a);
   
   
}